% function used as interpolation function to generate 
% the path with the coordinates from Staliro using the following interface:
%   y = FunctionName(x,timeStamps)
%       where
%           * x are the values of the search variables that parameterize the signal
%                   (these are the values determined by S-Taliro)
%           * timeStamps is a vector containing the times at which we need to know
%                   the value of the signal y.
function y= generate_path(x,timeStamps)
    % transform the 1 x 2n array of coordinates to n x 2 matrix where each row
    % is a point
    points = arr_to_points_matrix(x);
    % generate the lines between the points of the path and the landing circle
    [tiles,land]=line_patches(points);
    % update the virtual world with the lines and landing site of the new path
    lines2wrl(tiles,land,points(1,1:2));
    % return an array with the values of the output at the desired time stamps
    % for staliro
    y=CustomInputSignal_FixedTime(x,timeStamps);
end

% helper funtion to transform the input array of coordinates x to a matrix
% n x 2 with a point on each row
function points=arr_to_points_matrix(x)
    assignin('base','points',x); 
    row=1;
    len = length(x);
    points=zeros(len/2,2);
    % transform the 1 x 2n array of coordinates to n x 2 matrix where each row
    % is a point
    for input_idx=1:len
        if rem(input_idx,2)==0
            points(row,2)=x(input_idx);
            row=row+1;
        else
            points(row,1)=x(input_idx);
        end
    end
end
% function to generate the lines and the landing site given a n x 2 matrix 
% of n points
% input: 
%   points n x 2 matrix of x y coordinats
% outputs: 
%   tiles: a matrix with the coordinates of a 10 cm wide path going
%           from one point to the next in the input points matrix
%   land: position of the center of the landing circle (25 cm from the end
%           of the last segment)
function [tiles,land] = line_patches(points)
            % extend coordinates
            w=0.1;
            ext_points=[];
            for jj=1:size(points,1)-1
                pt1=points(jj,1:2);
                pt2=points(jj+1,1:2);
                ext1=pt2-pt1;
                ext2=pt1-pt2;
                [theta1,~] = cart2pol(ext1(1),ext1(2));
                [theta2,~] = cart2pol(ext2(1),ext2(2));
                [x1,y1]=pol2cart(theta1,-(w/2));
                [x2,y2]=pol2cart(theta2,+(w/2));
                ext_points=[ext_points; pt1+[x1 y1]; pt2-[x2 y2]];
            end
            % calculate patch coordinate
            idx=1;
            for ii=1:2:size(ext_points,1)-1
                sub=ext_points(ii:ii+1,1:2);
                data_tan=diff(sub);
                data_tan = data_tan./sqrt(sum(data_tan.^2,2));
                data_norm = data_tan*[0 -1;1 0];
                delta = w/2;
                data_offset = data_norm*delta;
                data_offset(end+1,:) = data_offset(end,:);
                data_new = sub + data_offset;
                data_new2 = sub - data_offset;
                tiles(idx).x= [data_new2(1,1) data_new2(2,1) data_new(2,1) data_new(1,1)];
                tiles(idx).y= [data_new2(1,2) data_new2(2,2) data_new(2,2) data_new(1,2)];
                idx=idx+1;
            end
            % calculate landing center
            pt1=ext_points(end-1,1:2);
            pt2=ext_points(end,1:2);
            ext2=pt1-pt2;
            [theta2,~] = cart2pol(ext2(1),ext2(2));
            land_dist = 0.25; % landing distance
            [x2,y2]=pol2cart(theta2,land_dist);
            land=pt2-[x2 y2];
            
end

% function to update the virtual world for the simulation using the
% template 'arena_tmpl.wrl' and the coordinates given as inputs 
% inputs: 
%   Wtiles : coordinates of the points along the path
%   land_coord: coordinates of the center of the landing circle
%   start_coord: coordinates to use as starting position for the drone
function lines2wrl(Wtiles,land_coord,start_coord)
            color = [1 0 0];
            w=vrworld('arena_tmpl.wrl');
            open(w);
            reload(w);
            points = [];
            for ii=1:length(Wtiles)
                points=[points;Wtiles(ii).x' -0.02.*ones(4,1) -Wtiles(ii).y'];
            end
            idx=[];
            for jj=1:length(Wtiles)
                idx=[idx, (4*(jj-1):4*(jj-1)+3) -1];
            end

            delete(w.Lines.children);

            lines = vrnode(w,'Lines');
            setfield(lines,'rotation',[0 1 0 -1.5708]);
            LS = vrnode(lines,'children','Lines_Shape','Shape');

            LA = vrnode(LS,'appearance','','Appearance');
            LM = vrnode(LA,'material','','Material');
            setfield(LM,'diffuseColor',color);

            LG = vrnode(LS,'geometry','','IndexedFaceSet');
            setfield(LG,'convex','FALSE');
            setfield(LG,'solid','FALSE');
            setfield(LG,'coordIndex',idx');
            coordLG = vrnode(LG,'coord','','Coordinate');
            setfield(coordLG,'point',points);

            material = vrnode(w,'LS_Mat');
            setfield(material,'diffuseColor',color);

            if ~isempty(land_coord)
                w.LandingSpot.translation = [land_coord(2) -0.02 land_coord(1)];
                setfield(material,'transparency',0);
            else
                setfield(material,'transparency',1);
            end
            Quad = vrnode(w,'QuadBody');
            Quad.translation = [start_coord(2) 0.001765 start_coord(1)];

            iso = vrnode(w,'IsoNoRotation');
            iso.position = [start_coord(2) 0.001765 start_coord(1)] + [0.9009 0.6690 0.9900];

            onquad = vrnode(w,'OnQuadNoRotation');
            onquad.position = [start_coord(2) 0.001765 start_coord(1)] + [-3.0000 1.0000 0];

            initNew = evalin('base','init');
            if size(points,1)>=2
                %evalin('base','init.posNED=[points(1,2) points(1,1) -0.0460]')
                initNew.posNED = [start_coord(1,2) start_coord(1,1) -0.0460];
                evalin('base','init.posNED=[points(2) points(1) -0.0460]')
                %initNew.posNED = [x(2) x(1) -0.0460];
                
            else
                evalin('caller','init.posNED=[2 2 -0.0460]')
                initNew.posNED = [2 2 -0.0460];
            end
            
            save(w,fullfile(fileparts(mfilename('fullpath')),'support','arena.wrl'));
            close(w);
            % to refresh world in viewers
            w = vrworld(fullfile(fileparts(mfilename('fullpath')),'support','arena.wrl'));
            open(w);
            reload(w);

end

% distibute the 2n array of coordinates evenly (piecewise constant) along 
% an array of output y of the same length of the timeStamps
function y = CustomInputSignal_FixedTime(x,timeStamps)
    %number of samples
    ns = length(timeStamps);
    y = zeros(ns,1);
    n_rows=length(x);
    arr=linspace(1,ns,n_rows+1);
    for index=1:n_rows
        y(round(arr(index),0):round(arr(index+1),0))=x(index);
    end
end

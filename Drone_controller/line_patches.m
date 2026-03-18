function [tiles,land] = line_patches(points)%,w)
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
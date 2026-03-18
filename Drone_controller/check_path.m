function invalid_path = check_path(coordinates_array)
    points = zeros(size(coordinates_array,1)/2,2);
    for i=1:size(points,1)
        points(i,1)=coordinates_array((2*i)-1);
        points(i,2)=coordinates_array(2*i);
    end
    low_angle = check_angle(points);
    intersect = check_intersections(points);
    short_distance = check_distance(points);
    invalid_path = low_angle + intersect + short_distance;

end


function low_angle = check_angle(points)
%if first iteration check for angles

MINIMUM_ANGLE = evalin('base','angle_threshold');
low_angle=0;
%points = zeros(size(coordinates_array,1)/2,2);
%for i=1:size(points,1)
%    points(i,1)=coordinates_array((2*i)-1);
%    points(i,2)=coordinates_array(2*i);
%end
for ii = 2:size(points,1)-1
    if low_angle==0
        v1=[points(ii-1,1)-points(ii,1),points(ii-1,2)-points(ii,2)];                    
        v2=[points(ii+1,1)-points(ii,1),points(ii+1,2)-points(ii,2)];
        [ang1,~]=cart2pol(v1(1),v1(2));
        [ang2,~]=cart2pol(v2(1),v2(2));
        ang1=rad2deg(ang1);
        ang2=rad2deg(ang2);
                    
        ang=abs(ang2-ang1);
        if ang>180
            ang=360-ang;
        end
        if ang<MINIMUM_ANGLE
            low_angle=1;
            return
        end
    end
end

end


function intersect = check_intersections(points)
    allow_interstions = evalin('base','allow_interstions');
    if(allow_interstions == 1)
        intersect = 0;
        return
    end
    for outer = 1:(length(points(:,1))-3)
         xi1 = points(outer,1);
         yi1 = points(outer,2);
         xf1 = points(outer+1,1);
         yf1 = points(outer+1,2);
         A = zeros(2,2);
         b = zeros(2,1);
         A(1,1) = xf1-xi1;
         A(2,1) = yf1-yi1;
         for inner = (outer+2):(length(points(:,1))-1)
            intersect = false;
            xi2 = points(inner,1);
            yi2 = points(inner,2);
            xf2 = points(inner+1,1);
            yf2 = points(inner+1,2);
            A(1,2) = xi2-xf2;
            A(2,2) = yi2-yf2;
            b(1,1) = xi2-xi1;
            b(2,1) = yi2-yi1;
            if inner == length(points(:,1))-1
                A(1,2)= A(1,2)*1.2;
                A(2,2)= A(2,2)*1.2;
            end
            if det(A) ~= 0
      
                 v = linsolve(A,b);
                 u = v(1); 
                 s = v(2); 
      
                 if(u >= 0 && u <= 1 && s >= 0 && s <= 1 )
                     intersect = 1;
                     return
                 end
            end
         end
     end
end


function short_distance = check_distance2(points)
    MINIMUM_Distance = evalin('base','distance_threshold');
    short_distance = 0;
    for outer = 1:(length(points(:,1)))
         xi = points(outer,1);
         yi = points(outer,2);
         for inner = (outer+1 : (length(points(:,1))))
             xf = points(inner,1);
             yf = points(inner,2);
             v= [xf-xi,yf-yi];
             [~,dist]=cart2pol(v(1),v(2));
             if dist<MINIMUM_Distance
                 short_distance = 1;
                 return
             end
         end
         
    end
end

function short_distance = check_distance(points)
    MINIMUM_Distance = evalin('base','distance_threshold');
    short_distance = 0;
    x_circle = points((length(points(:,1))),1);
    y_circle = points((length(points(:,1))),2);
    x_prev = points((length(points(:,1)))-1,1);
    y_prev = points((length(points(:,1)))-1,2);
    [theta,rho] = cart2pol(x_circle-x_prev,y_circle-y_prev);
    [x_circle, y_circle] = pol2cart (theta, (rho+0.35));
    x_circle = x_circle + x_prev;
    y_circle = y_circle + y_prev;
    for outer = 1:(length(points(:,1)))-1
         xi = points(outer,1);
         yi = points(outer,2);
         xf = points(outer+1,1);
         yf = points(outer+1,2);
         v= [xf-xi,yf-yi];
         if norm (v) < MINIMUM_Distance
             short_distance = 1;
             return
         end

         segmentStart = [xi,yi];
         segmentEnd = [xf,yf];
        
         for inner = 1:(length(points(:,1)))
             if inner ~= outer && inner ~= outer+1
             
             if inner == (length(points(:,1)))
                 xp = x_circle;
                 yp = y_circle;
             else
                 xp = points(inner,1);
                 yp = points(inner,2);
             end
             point = [xp,yp];
             dist = distancePointSegment(point, segmentStart, segmentEnd);
             if dist < MINIMUM_Distance
                 short_distance = 1;
                 return
             end
            end
         end
    end
end

function dist = distancePointSegment(point, segmentStart, segmentEnd)

v = point - segmentStart;
w = segmentEnd - segmentStart;
c1 = dot(v, w);
c2 = dot(w, w);
if c1 <= 0
    dist = norm(v); 
elseif c1 >= c2
    dist = norm(point - segmentEnd); 
else
    pb = segmentStart + c1/c2 * w; 
    dist = norm(point - pb); 
end

end
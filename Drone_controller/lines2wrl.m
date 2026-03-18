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
            pos_iniziale_prima=initNew.posNED
            if size(points,1)>=2
                evalin('base','init.posNED=[points(1,2) points(1,1) -0.0460]')
                initNew.posNED = [points(1,2) points(1,1) -0.0460];
            else
                evalin('base','init.posNED=[2 2 -0.0460]')
                initNew.posNED = [2 2 -0.0460];
            end
            %evalin('base','init.posNED=initNew.posNED')
            %assignin('base', 'init', initNew);

            pos_iniziale=initNew.posNED
            save(w,fullfile(fileparts(mfilename('fullpath')),'support','arena.wrl'));
            %vrdrawnow;
            close(w);
            % to refresh world in viewers
            w = vrworld(fullfile(fileparts(mfilename('fullpath')),'support','arena.wrl'));
            open(w);
            reload(w);

end

function name = generate_name(solver)
    tmp_clock = clock;
    str_clock = [num2str(tmp_clock(1)),'_',num2str(tmp_clock(2)),'_',num2str(tmp_clock(3)),'_',num2str(tmp_clock(4)),'_',num2str(tmp_clock(5))];
    controller = num2str(evalin('base','controller_selector'));
    angle = num2str(evalin('base','angle_threshold'));
    intersections = num2str(evalin('base','allow_interstions'));
    distance = num2str(evalin('base','distance_threshold')*100,'%i');
    i = num2str(evalin('caller','ii'));
    runs = num2str(evalin('base','opt.runs'));
    name = ['parrotMinidrone_', str_clock,'_C',controller,'_A',angle ,'_I',intersections,'_D',distance,'_',solver, '_results'];
end
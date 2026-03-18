
% - MATLAB and Simulink installed.
% - Hecate installed as described in the README.md.
% - Add the necessary folders to MATLAB's path.

%% Set Up the Path and Load Initialization Data
% Add the required folders to MATLAB's path. This ensures Hecate can find
% the necessary dependencies. This operation is only needed once but has no
% side effects if repeated.

% addpath(genpath("src"))
% addpath(genpath("staliro"))


%Check if this is the first execution to setup staliro
if staliro_ready == 0
   cd('staliro\')
   setup_staliro
   cd('..')
end
clc

clear


%% Remove unnecessary warnings (optional) 
% Running Hecate can trigger some warning messages. This is normal and
% expected behaviour, so this section deactivates some specific warnings.

% Warning for unused symbols in the Test Sequence/Assessment.
warning off Stateflow:reactive:UnusedDataInReactiveTestingTableChart

% Warning for unused symbols in the Fitness Converter Stateflow Chart.
warning off Stateflow:cdr:UnusedDataOrEvent

% Warning for requirement violation.
warning off Stateflow:Runtime:TestVerificationFailed

warning off all
%% Define settings for Hecate

% Set the RNG seed to a random value. This is important to have different
% results if Hecate is run multiple times just after opening Matlab
% (important if you run the experiments on a server).
rng("shuffle")

cd('mainModels')

% Define the model name (the file extension can be omitted)
modelName = 'parrotMinidroneCompetition';
points=zeros(8);

cd('..')


% Define Hecate parameter properties in a struct array variable.
% Each Hecate parameter must be defined in this array, even if they are not
% used by the active Test Sequence scenario. The order of the parameters is
% not important.
% For each parameter, the following properties must be defined:
% - Name, as written in the Test Sequence
% - Lower bound
% - Upper bound
inputParam(1).Name = 'Hecate_X1';
inputParam(1).LowerBound = 0.4;
inputParam(1).UpperBound = 3.75;

inputParam(2).Name = 'Hecate_Y1';
inputParam(2).LowerBound = 0.4;
inputParam(2).UpperBound = 3.75;

inputParam(3).Name = 'Hecate_X2';
inputParam(3).LowerBound = 0.4;
inputParam(3).UpperBound = 3.75;

inputParam(4).Name = 'Hecate_Y2';
inputParam(4).LowerBound = 0.4;
inputParam(4).UpperBound = 3.75;

inputParam(5).Name = 'Hecate_X3';
inputParam(5).LowerBound = 0.4;
inputParam(5).UpperBound = 3.75;

inputParam(6).Name = 'Hecate_Y3';
inputParam(6).LowerBound = 0.4;
inputParam(6).UpperBound = 3.75;

inputParam(7).Name = 'Hecate_X4';
inputParam(7).LowerBound = 0.4;
inputParam(7).UpperBound = 3.75;

inputParam(8).Name = 'Hecate_Y4';
inputParam(8).LowerBound = 0.4;
inputParam(8).UpperBound = 3.75;

inputParam(9).Name = 'Hecate_X5';
inputParam(9).LowerBound = 0.4;
inputParam(9).UpperBound = 3.6;

inputParam(10).Name = 'Hecate_Y5';
inputParam(10).LowerBound = 0.5;
inputParam(10).UpperBound = 3.5;


% Define Simulation Time for the model (in seconds).
% This value overwrites the one defined inside the model.
simulationTime = 305;

% Create the Hecate options object.
% Check the hecate_options.m and staliro_options.m files for a description
% of each property and what is the default value.
hecateOpt = hecate_options();

startVars

%Set to one so staliro_options does not run after the first time
staliro_ready = 1;

% select controller 1, 2 or 3
controller_selector = 3;

%set minimum allowed angle
angle_threshold = 15;

%set minimum allowed distance between points in meters
distance_threshold = 0.20;

%set if intersections are allowed
allow_interstions=0;

% Let's set the search algoritm to Uniform Random (UR_Taliro), instead of
% Simulated Annealing (SA_Taliro), which is the default option.
hecateOpt.optimization_solver = 'SA_Taliro';

% The maximum number of iterations per run is set to 50. 
% Note: Always define this parameter after choosing the search algorithm.
hecateOpt.optim_params.n_tests = 1500;

% The experiment will be repeated for 10 runs to make some statistical
% considerations.
hecateOpt.runs = 1;

% This option specifies whether the tool should read a Test Assessment or a
% Requirements Table block.
hecateOpt.spec_source = "test_assessment";

% non uso Test Sequence -> no scenario
% This option defines which Test Sequence scenario must be used for test
% case generation.
% The model under consideration has:
% 
% hecateOpt.sequence_scenario = 'Map1';

% This option defines which Test Assessment scenario must be used for
% requirement specification.
% The model under consideration has

hecateOpt.assessment_scenario = 't1';


% This option allows to save the results after each run to minimise data
% loss. In this case, the model isn't very fast, so we choose to save the
% intermediate results.
hecateOpt.save_intermediate_results = 1;

% This option allows to save some time information on computational time
% and simulation time in the Results variable.
hecateOpt.TimeStatsCollect = 1;

% This option allows to compute some performance parameters over all the
% runs considered, save them in the Results variable and display them at
% the end.
hecateOpt.disp_results = 1;


%% Run Hecate

[Results,History,Options] = hecate(modelName,inputParam,simulationTime,hecateOpt);

%% Save results

fileStr = string(datetime("now","Format","yyyy-MMM-dd-HH_mm_ss"));
fileStr = "./Hecate_results/" + fileStr + ".mat";
save(fileStr);
fprintf("\nResults were saved in %s.\n",fileStr);
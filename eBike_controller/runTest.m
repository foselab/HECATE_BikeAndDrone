%% Script for Running Tests with Hecate
% This script is used to configure and run Hecate for generating test cases
% on Simulink models. Follow the steps explained in the comments to configure
% and execute the process. Ensure that Hecate and its dependencies are properly installed.

% **Prerequisites:**
% - MATLAB and Simulink installed.
% - Hecate installed as described in the README.md.
% - Add the necessary folders to MATLAB's path.

%% 1. Set Up the Path and Load Initialization Data
% Add the required folders to MATLAB's path. This ensures Hecate can find
% the necessary dependencies. This operation is only needed once but has no
% side effects if repeated.
addpath("src")          % Folder containing Hecate source code
addpath(genpath("staliro"))  % Folder containing S-Taliro and its dependencies

% **Load Initialization Data**
% If your model requires specific initialization parameters, ensure that
% the corresponding .mat file is available and load it here.
% Replace 'init_data.mat' with the correct file name as needed.
load("bldcData.mat")   % File containing initialization parameters
fprintf("Initialization data loaded successfully.\n");

%% 2. Disable Warnings (Optional)
% Running Hecate may generate some warnings. These are expected and do not
% indicate critical issues. This step disables warnings to avoid distractions.
warning("off", 'all')

% **Simulink Model**
% Specify the name of the Simulink model to test. Ensure the corresponding
% .slx file is in the same directory or included in MATLAB's path.
modelName = 'Buck_model';
% modelName = 'PWM_model';

% **Input Parameters**
% Define the input parameters used by Hecate.
% Each parameter must have:
% - A Name (as defined in the Test Sequence),
% - A Lower Bound,
% - An Upper Bound.
inputParam(1).Name = 'Hecate_speed';
inputParam(1).LowerBound = 0;
inputParam(1).UpperBound = 170;

inputParam(2).Name = 'Hecate_x';
inputParam(2).LowerBound = 0;
inputParam(2).UpperBound = 10;

% **Simulation Time**
% Specify the simulation duration in seconds.
simulationTime = 35;

% **Hecate Options Configuration**
% Create an options object for Hecate and customize its settings.
hecateOpt = hecate_options();

% **Optimization Algorithm**
% Select the search algorithm. Here, we use Uniform Random ('UR_Taliro') 
% to generate random tests. The default is Simulated Annealing ('SA_Taliro').
hecateOpt.optimization_solver = 'UR_Taliro';

% **Maximum Iterations**
% Set the maximum number of tests per run.
hecateOpt.optim_params.n_tests = 50;

% **Number of Runs**
% Define the number of executions to collect statistical data.
hecateOpt.runs = 10;

% **Test Sequence Scenario**
% Choose the test sequence scenario from the available options. 
% Scenarios define how parameters vary over time.
% The models under consideration has six:

hecateOpt.sequence_scenario = 'Grafico_Scalino_1';
%hecateOpt.sequence_scenario = 'Grafico_Scalino_2';
%hecateOpt.sequence_scenario = 'Grafico_Scalino_3';
%hecateOpt.sequence_scenario = 'Grafico_DoppioTronco_1';
%hecateOpt.sequence_scenario = 'Grafico_DoppioTronco_2';
%hecateOpt.sequence_scenario = 'Grafico_DoppioTronco_3';


% **Test Assessment Scenario**
% Choose the scenario that specifies the system requirements to test.
% Each scenario represents a different requirement to verify.
% The model under consideration has three:
% * SpeedLimit_0: Motor speed shall always be positive or zero.
% * SpeedLimit_170: Motor speed shall always be lower than 170 rpm.
% * SpeedLimit_HS: Motor speed shall not exceed that requested by the rider.

hecateOpt.assessment_scenario = 'SpeedLimit_0';
%hecateOpt.assessment_scenario = 'SpeedLimit_170';
%hecateOpt.assessment_scenario = 'SpeedLimit_HS';

% **Intermediate Results**
% Enable or disable saving intermediate results. Here, it is disabled to
% speed up execution.
hecateOpt.save_intermediate_results = 0;

% **Timing Statistics**
% Collect statistics on execution and simulation times.
hecateOpt.TimeStatsCollect = 1;

% **Display Results**
% Display a summary of performance metrics at the end of all runs.
hecateOpt.disp_results = 1;

%% 4. Run Hecate

% Execute Hecate with the specified parameters and options.
% The output includes:
% - 'Results': statistical data from the runs,
% - 'History': details of the simulations,
% - 'Options': the configuration used.
[Results,History,Options] = hecate(modelName,inputParam,simulationTime,hecateOpt);

%% 5. Save Results

% Save the results to a .mat file with a unique name based on the current date and time.
fileStr = string(datetime("now","Format","yyyy-MMM-dd-HH:mm:ss"));
fileStr = "./ModelResults_" + fileStr + ".mat";

% Save the results
save(fileStr);
fprintf("\nResults were saved in %s.\n", fileStr);
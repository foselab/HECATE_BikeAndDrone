# Test Case Generation with Hecate: To Infinity and Beyond!

This repository contains the necessary files to replicate a series of tests described in the _Test Case Generation with Hecate: To Infinity and Beyond!_ paper. The tests involve using the [Hecate](https://github.com/Hecate-SBST/Hecate) tool for test case generation and Simulink models to evaluate system behavior against defined requirements.

## Repository Folders

This repository contains two folders, i.e., one for each of the two analyzed case studies (`Drone_controller` and `eBike_controller`).

### eBike_controller
The folder contains:

- two Simulink models (Buck and PWM)
- a script to run Hecate on them
- an initialization file containing model parameters.
- an Excel file containing the results of our experiments.
- a Python script performing the statistical tests between number of iterations and time, for the comparison between Uniform Random and Simulated Annealing.

#### Requirements

To run the script and be able to open the Simulink models, ensure the following software is installed:

- [MATLAB](https://it.mathworks.com/products/matlab.html?requestedDomain) version R2024a or newer and the following Add-Ons:
  - Simulink
  - Simulink Test
  - Simscape Electrical (Simscape)
  - Parallel Computing Toolbox
- [Hecate](https://github.com/Hecate-SBST/Hecate) (Follow the instructions written in the tool repo)

#### How to Install

In MATLAB, navigate to the Hecate repository and add the folders `src` and `staliro` to the active path. The _genpath_ function takes also the subfolders.

```matlab
addpath("src")
addpath(genpath("staliro"))
```

Then, add also the `eBike_controller` from this repository to the active path.

```matlab
addpath("Replication_Package")
```

#### How to Run

After adding to the active path the necessary folders, navigate into the `eBike_controller` folder and run the following command to execute the test.

```matlab
runTest;
```

#### Possible configurations

In the _runTest_ script, the user can change:

- the _Simulink Model_ changing the _modelName_ variable (_Buck_model_ or _PWM_model_)
- the _Test Sequence Scenario_ changing the _hecateOpt.sequence_scenario_ variable (6 available scenarios)
- the _Test Assessment Scenario_ changing the _hecateOpt.assessment_scenario_ variable (3 available scenarios)

When the user changes the Test Sequence Scenario or the Assessment Scenario, both must be activated from the Simulink Model by opening the _Test Sequence_ Block and the _Test Assessment_ Block and selecting the right scenario in the Tab Scenarios. The chosen scenario has a little thunderbolt icon.

#### Statistical test results

`
Wilcoxon Rank Sum Test on average number of iterations
{'statistic': 0.037904902178945175, 'p_value': 0.9697635044861096, 'reject_null': False, 'effect_size': -0.11923687194166115, 'confidence_interval': (-4.8031564689160655, 3.5013173884562923)}
`

`
Wilcoxon Rank Sum Test on times
{'statistic': 0.16262867961000602, 'p_value': 0.8708108045360416, 'reject_null': False, 'effect_size': -0.24753480517182908, 'confidence_interval': (-4915.796179129435, 2388.6628457961033)}
`
### Drone_controller

The folder contains:

- a Simulink model of a drone controller with its Simulink project (`MinidroneCompetition.prj`)
- a script to run Hecate on the drone controller (`runTest_hecate.m`)
- a folder containing the results of our experiments (`Hecate_results`)

#### Requirements

To run the simulation and be able to open the Simulink model, ensure the following software is installed:

- [MATLAB](https://it.mathworks.com/products/matlab.html?requestedDomain) version R2024b or newer and the following Add-Ons:
  - Simulink  
  - Stateflow
  - Aerospace Blockset 
  - Aerospace Toolbox 
  - Computer Vision Toolbox 
  - Control System Toolbox
  - Global Optimization Toolbox
  - Image Processing Toolbox
  - MATLAB Coder
  - MATLAB Support for MinGW-w64 C/C++/Fortran Compiler
  - Optimization Toolbox
  - Parallel Computing Toolbox
  - Signal Processing Toolbox
  - Simulink 3D Animation
  - Simulink Support Package for Parrot Minidrones

#### How to Install

In MATLAB, open the _MinidroneCompetition.prj_ project file. This action will initialize the project path, set up working folders, open the Quadcopter Model and the simulation.

#### How to Run

After the Simulink model is open, in MATLAB execute the file

```matlab
runtTest_hecate.m
```

To generate different tracks and test the chosen controller using Hecate.

The function used by Hecate to generate new paths is in the file `generate_path.m`.

#### Results

In the `Hecate_results` folder you can find:

- **`testSA_Drone.mat`** — contains the test results for the comparison with the drone (S-Taliro vs Hecate) using the SA algorithm
- **`testSA_Hecate.mat`** — contains the test results for the comparison with the e-Bike using the SA algorithm
- **`testUR_Hecate.mat`** — contains the test results for the comparison with the e-Bike using the UR algorithm

#### Possible configurations

Inside the _runTest_hecate.m_ file, the user can select different S-Taliro options:

- `opt.optimization_solver`: optimization algorithm (UR_Taliro, SA_Taliro);
- `opt.runs`: number of runs;
- `opt.optim_params.n_tests`: number of tests per each run;
- `opt.save_intermediate_results`: set 1 to save intermediate results during the experiments, otherwise 0.

The user can also select the parameters to generate different tracks:

- `controller_selector`: the controller version under test (1,2,3);
- `angle_threshold`: the minimum valid angle;
- `distance_threshold`: the minimum distance between two lines;
- `allow_interstions`: set 1 to allow intersections between lines.

## Contributors

The following authors contributed to the _Test Case Generation with Hecate: To Infinity and Beyond!_ paper:

- _Nunzio Marco Bisceglia_, Gran Sasso Science Institute, Italy
- _Michael Marzella_, University of Bergamo, Italy
- _Daniele Lazzari_, University of Bergamo, Italy
- _Marcello Minervini_, University of Bergamo, Italy
- _Federico Formica_, McMaster University, Canada
- _Angelo Gargantini_, University of Bergamo, Italy
- _Claudio Menghi_, University of Bergamo, Italy and McMaster University, Canada
- _Andrea Bombarda_, University of Bergamo, Italy

# move_PA10
PA10 mitsubishi manipulator Trajectories - PI control
This program generates trajectories in joint motion for PA 10 manipulator
init.c initialize_all.c initialize_data.c and path_init.c are for initializing system parameters, path parameters, and log variables
five, allzero and ten nop.c (no operation) command manipulator to move in joint mode to respective joint angles
file.c logs the data, finish.c call the log function after closing the threads
path generate calculates joint position, velocity and acceleration for trajectory generation between two points using quntic polynaomial scheme
pid_control function generates toque for the joints to control joint motion using PD control
operation.c calls device drivers for system for manipulator operation simulation selects simulation mode (torque not generated
*brake function switches on and off specific or all brakes for the motor before operation
control.c cp.c joint_mode.c joint_move.c main.c receive input from console matches to corect command and call required function

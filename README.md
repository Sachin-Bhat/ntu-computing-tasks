# ntu-computing-tasks

This is a repo of a few tasks given at NTU. The programs are all written in C.  

## Instructions
Clone this repo using the ``` git clone ``` command.  

### Task 1
Open a terminal app and copy the following commands:  
```
cd ntu-computing-tasks
gcc -o serial ./task_1_serial.c -std=c11  
./serial
```  
Enter the integration step count when prompted. The result should be along the lines of this:  
  
<img width="959" alt="Task 1" src="https://raw.githubusercontent.com/Sachin-Bhat/ntu-computing-tasks/master/Task_1.png">

### Task 2
Open a terminal app and copy the following commands:  
```
cd ntu-computing-tasks
mpicc -o omp ./task_2_omp.c -fopenmp 
mpirun -np 1 ./omp
```  
Enter the number of threads when prompted (at cursor blink). The result should be along the lines of this:  
  
<img width="959" alt="Task 2" src="https://raw.githubusercontent.com/Sachin-Bhat/ntu-computing-tasks/master/Task_2.png">

### Task 3
Open a terminal app and copy the following commands:  
```
cd ntu-computing-tasks
mpicc -o mpi ./task_3_mpi.c -lm  
mpirun -np [process-count] ./mpi
```  
Replace the [process-count] with an integer number. The result should be along the lines of this:  
  
<img width="959" alt="Task 3" src="https://raw.githubusercontent.com/Sachin-Bhat/ntu-computing-tasks/master/Task_3.png">

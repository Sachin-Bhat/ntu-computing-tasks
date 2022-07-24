#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include<time.h>


static long iterations = 1000000;

int main(int argc, char* argv[])
{
    double x, y, z;                  //(x,y) for the random coordinate. z is used to check if x^2+y^2<=1            
    long count = 0;                  //holds all the number of satisfied coordinates
    double pi;                       //holds approximate value
    int nthreads;
    long i;
    double op_time;
    
    printf("\n");
    printf("Threads: ");
    scanf("%d", &nthreads);        // set numthreads
    omp_set_num_threads(nthreads);
    op_time = omp_get_wtime();

    #pragma omp parallel
    {
      #pragma omp single
          printf(" %d threads ",omp_get_num_threads());

      srand48((int)time(NULL) ^ omp_get_thread_num());  //Give random() a seed value
      #pragma omp for reduction(+:count) private(x,y,z)
      for (i = 0; i<iterations; ++i)
      {
          x = (double)drand48();
          y = (double)drand48();
          z = ((x * x) + (y * y));

          if (z <= 1)
             ++count;
      }
    }

    pi = ((double)count / (double)(iterations)) * 4.0;
    printf("Estimated Pi = %f\n", pi);
    printf("Time: %f\n", omp_get_wtime()-op_time);
    return 0;
}
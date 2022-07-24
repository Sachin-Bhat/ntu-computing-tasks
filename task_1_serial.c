#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define SEED 13579246

clock_t start, end;

int main(int argc, char* argv)
{
   int niter=0;
   double x,y;
   int i,count=0; # no. of points in the first quadrant of unit circle
   double z;	# to check if x-sqare + y-square is less than 1
   double pi;	# approximate value

   printf("Enter the number of iterations used to estimate pi: ");
   scanf("%d",&niter);

   /* initialize random numbers */
   srand(SEED);
   count=0;
   start = clock();
   for ( i=0; i<niter; i++) {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1) count++;
   }
   pi=(double)count/niter*4;
   end = clock();
   printf("# of trials= %d , estimate of pi is %g, time-taken is %.6f seconds \n",niter,pi,(double)(end-start)/CLOCKS_PER_SEC);
}
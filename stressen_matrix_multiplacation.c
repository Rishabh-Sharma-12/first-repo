#include<stdio.h>
#include<time.h>
int main(){
   // Initializing variables for calculating time
    clock_t start, end;
    // Initializing variables for calculating CPU time
    double cpu_time_used;
    // Starting the time measurement
    start = clock();
   //initilizing an array for final solution
   int z[2][2];
   //taking variables for loops in 2 X 2 matrix 
   int i, j;
   //initilizing variables for equations 
   int m1, m2, m3, m4 , m5, m6, m7;
   //defining the values of 1st array
   int x[2][2] = {
       {112, 834}, 
       {222, 150}
       };
   //defining the values of 2nd array
   int y[2][2] = {
       {3, 46}, 
       {52, 81}
   };
   //printing the values of 1st array
   printf("\nThe first matrix is\n");
   for(i = 0; i < 2; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", x[i][j]);
   }
   //printing the values of 2nd array
   printf("\nThe second matrix is\n");
   for(i = 0; i < 2; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", y[i][j]);
   }
   //defining values of the equation of stressen 
   m1= (x[0][0] + x[1][1]) * (y[0][0] + y[1][1]);
   m2= (x[1][0] + x[1][1]) * y[0][0];
   m3= x[0][0] * (y[0][1] - y[1][1]);
   m4= x[1][1] * (y[1][0] - y[0][0]);
   m5= (x[0][0] + x[0][1]) * y[1][1];
   m6= (x[1][0] - x[0][0]) * (y[0][0]+y[0][1]);
   m7= (x[0][1] - x[1][1]) * (y[1][0]+y[1][1]);
   z[0][0] = m1 + m4- m5 + m7;
   z[0][1] = m3 + m5;
   z[1][0] = m2 + m4;
   z[1][1] = m1 - m2 + m3 + m6;
   //printing the values after product from z array
   printf("\nProduct achieved using Strassen's algorithm \n");
   for(i = 0; i < 2 ; i++) {
      printf("\n");
      for(j = 0; j < 2; j++)
         printf("%d\t", z[i][j]);
   }
   printf("\n");
   end = clock();
    //printing the total time taken by cpu
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken is %0.3f seconds to execute.\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
   return 0;
}


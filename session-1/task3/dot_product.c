
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) );

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */
   for (int k = 0; k < n; k++) {
      a[k] = (float)k;  // initialise vector a
      b[k] = (float)(k + 1);  // initialise vector b
   }
   float sum = 0.0;
   for (int k = 0; k < n; k++) {
      d[k] = a[k] * b[k];
      sum += d[k];
   }
   printf("Dot product = %f\n", sum);

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }
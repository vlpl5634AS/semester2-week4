
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    // Initialize matrix a and vector b
      for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 4; j++) {
               a[i][j] = 1.0;
         }
         b[i] = 1.0;
      }
    // Compute matrix-vector product
    for (int i = 0; i < 4; i++) {
         c[i] = 0.0;
         for (int j = 0; j < 4; j++) {
               c[i] += a[i][j] * b[j];
         }
    }
    // Print the result
    for (int i = 0; i < 4; i++) {
         printf("c[%d] = %f\n", i, c[i]);
    }
    return 0;
 }

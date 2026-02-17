
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>
int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
   a = malloc(n * sizeof(float*));  // allocate memory for row pointers
    for (int i = 0; i < n; i++) {
        a[i] = calloc(n, sizeof(float));  // allocate memory for each row of the matrix
    }
    b = calloc(n, sizeof(float));  // allocate memory for vector b
    c = calloc(n, sizeof(float));  // allocate memory for vector c

    // Initialize matrix a and vector b
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 1.0;
        }
        b[i] = 1.0;
    }

    // Compute matrix-vector product
    for (int i = 0; i < n; i++) {
        c[i] = 0.0;
        for (int j = 0; j < n; j++) {
            c[i] += a[i][j] * b[j];
        }
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("c[%d] = %f\n", i, c[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(b);
    free(c);
    free(a);
    return 0;
 }


/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for (int i = 0; i < 20; i++) {
        if (i == 0) {
            f[i] = 1; // Factorial of 0 is 1
        } else {
            f[i] = i * f[i - 1]; // Factorial of n is n * factorial of (n-1)
        }
        printf("%d! = %d\n", i, f[i]); // Print the factorial of each index
    }
    return 0;
 }


#include <stdio.h>

int main( void ) {
    int mat1[5][5];
    int mat2[5][5];
    int sum[5][5];

    // set initial data
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            mat1[j][k] = -2;
            mat2[j][k] = 3; 
        }
    }

    // compute sum
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            sum[j][k] = mat1[j][k] + mat2[j][k]; 
        }
    }

    // print out the result
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            printf("%d ",sum[j][k]);
        }
        printf("\n");
    }

    return 0;
}
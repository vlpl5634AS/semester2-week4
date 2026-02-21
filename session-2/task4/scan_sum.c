
#include <stdio.h>

int main( void ) {

    // define suitable data
    int i;
    float f;


    // use scanf to read from the terminal
    
    int count = scanf("%d %f",&i,&f);
    // print the output from scanf and the data values 
    printf("Read %d values\n",count);
    printf("Values: %d %f\n",i,f);

    return 0;
}
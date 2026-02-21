
/*
Name: Ahmed sharkasi
Student ID: 201826539
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100]; // buffer to hold data in  
    buffer[0] = '\0'; //initialise an empty string
    
    // process the command-line data using appropriate string functions
    for (int i = 1; i <argc; i++){
        strcat(buffer, argv[i]);  // concatenate the arguments wuth the buffer

        if (i < argc - 1) {
                strcat(buffer, "-"); // add a hyphen in between the different arguments as long as its not last argument
            }


}
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}
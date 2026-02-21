/*
 * Find a substring within a given string
 */
#include <stdio.h>
#include <string.h>
 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"
int main( void ) {
    char str1[100] = "The quick brown fox jumped over the lazy dog";
    char str2[100] = "ump";
    char *ptr;

    // use 'strstr' to find the substring - print the pointer, character and string
    ptr = strstr(str1, str2);
    if (ptr != NULL) {
        printf("Substring found at pointer: %p\n", (void*)ptr);
        printf("First character of substring: %c\n", *ptr);
        printf("Substring found in string: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 


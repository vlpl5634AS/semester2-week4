
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);


    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, str2);
    printf("str3 after copying: %s\n", str3);

    return 0;
}

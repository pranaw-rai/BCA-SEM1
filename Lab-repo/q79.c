#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    // Input strings
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    printf("\n--- STRING OPERATIONS ---\n");

    // a. strlen()
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // b. strcpy()
    strcpy(temp, str1);
    printf("\nCopy of str1 into temp: %s\n", temp);

    // c. strcat()
    strcat(temp, str2);
    printf("Concatenation (str1 + str2): %s\n", temp);

    // d. strcmp()
    if (strcmp(str1, str2) == 0)
        printf("\nStrings are equal\n");
    else
        printf("Strings are NOT equal\n");

    // e. strrev() (NOTE: may not work in all compilers)
    #ifdef __TURBOC__
        printf("\nReverse of str1: %s\n", strrev(str1));
    #else
        printf("\nstrrev() may not be supported in GCC/modern compilers\n");
    #endif

    return 0;
}


// Output
/*
Enter first string: hello
Enter second string: world

--- STRING OPERATIONS ---
Length of str1: 5
Length of str2: 5

Copy of str1 into temp: hello
Concatenation (str1 + str2): helloworld
Strings are NOT equal

strrev() may not be supported in GCC/modern compilers
*/
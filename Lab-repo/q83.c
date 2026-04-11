#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Count characters until null character '\0'
    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of string is: %d\n", length);

    return 0;
}

// Output

/*
Enter a string: pranaw
Length of string is: 6
*/
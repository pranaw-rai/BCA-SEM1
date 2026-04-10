#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i , j;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // find end of string 1
    for ( i = 0; str1[i] != '\0'; i++);

    // Append str2 to str 1
    for ( j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}

// Output

/*
Enter first string: Vinland 
Enter second string: Saga
Concatenated string: Vinland Saga
*/
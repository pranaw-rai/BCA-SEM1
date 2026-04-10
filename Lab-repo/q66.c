#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] = str1[i] - 32;
        }
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            str2[i] = str2[i] - 32;
        }
    }

    printf("\nUppercase strings: \n");
    printf("String : %s\n", str1);
    printf("String: %s\n", str2);
    return 0;
}

// Output
/*
Enter first string: demon
Enter second string: slayer

Uppercase strings: 
String : DEMON
String: SLAYER
*/
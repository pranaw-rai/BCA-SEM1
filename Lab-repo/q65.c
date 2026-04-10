#include<stdio.h>

void displayVowels(char str[])
{
    int i;
    printf("Vowels in string: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            printf(" %c", str[i]);
        }
    }
    printf("\n");
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    displayVowels(str);
    return 0;
}

// Output

/*
Enter a string: hello
Vowels in string:  e o
*/
#include<stdio.h>
int main()
{
    char str[200];
    int i;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    printf("\n Words in the sentence: \n");
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("\n");
        } else {
            printf(" %c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

// Output

/*
Enter a sentence: I hate people

 Words in the sentence: 
 I
 h a t e
 p e o p l e
*/
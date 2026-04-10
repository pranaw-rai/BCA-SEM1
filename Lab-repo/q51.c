#include<stdio.h>

int findFactorial(int);

int main()
{
    int n1, f;
    printf("\nRecursion: Find factorial of a number: \n");
    printf("-----------------------------------------\n");

    printf("Input a number: ");
    scanf("%d", &n1);

    f = findFactorial(n1);
    printf("The factorial of %d is %d\n", n1, f);
    return 0;
}

int findFactorial(int n)
{
    if (n ==  1)
    {
        return 1;
    } else
    {
        return( n * findFactorial(n-1));
    }
}

// jOutput

/*

Recursion: Find factorial of a number: 
-----------------------------------------
Input a number: 4
The factorial of 4 is 24
*/
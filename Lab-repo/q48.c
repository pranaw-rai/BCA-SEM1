#include<stdio.h>
int max()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);
    if(a > b)
    {
        return a;
    } else {
        return b;
    }
}

int main()
{
    int result = max();
    printf("Greatest number is: %d\n", result);
    return 0;
}

// Output

/**
 Enter two numbers: 5
10
Greatest number is: 10
 */
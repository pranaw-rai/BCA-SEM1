#include<stdio.h>

void max()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);
    if(a > b)
    {
        printf("Greatest number is : %d\n", a);
    } else {
        printf("Greatest nuber is: %d\n", b);
    }
}

int main()
{
    max();
    return 0;
}

// Output

/*
Enter two numbers: 2
3
Greatest nuber is: 3

*/
#include<stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    } else 
    {
        return b;
    }

}

int main()
{
    int x, y, result;
    printf("Enter two numbers: ");
    scanf(" %d %d", &x, &y);
    result = max(x, y);
    printf("Greatest Number: %d\n", result);
    return 0;
}

// Output

/*
 Enter two numbers: 36
135
Greatest Number: 135
 */
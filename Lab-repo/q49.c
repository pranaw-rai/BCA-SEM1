#include<stdio.h>
void max(int a, int b)
{
    if (a > b)
    {
        printf("Greates number is %d\n", a);
    } else {
        printf("Greates number is %d\n", b);
    }
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf(" %d %d", &x, &y);
    max(x, y);
    return 0;
}

// Output

/*
Enter two numbers: 4 
6
Greates number is 6
*/
// Program to add two num using pointer

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a, *q = &b;
    int sum = *p + *q;
    printf("Sum = %d\n", sum);
    return 0;
}


// Output
// Sum = 30
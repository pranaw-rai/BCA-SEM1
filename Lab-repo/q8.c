// swap two values using temp variables
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: \n");
    printf("a = %d , b = %d", a, b);
    return 0;
}

// Output
// Enter two numbers: 4
// 5
// After swapping: 
// a = 5 , b = 4
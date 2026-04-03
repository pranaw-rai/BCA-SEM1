//  swap values without using temp var
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: \n");
    printf("a = %d, b  = %d", a, b);
    return 0;
}


/* Output
Enter two numbers: 
3
4
After swapping: 
a = 4, b  = 3
 */
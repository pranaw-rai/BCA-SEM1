// small among 2
#include<stdio.h>
int main()
{
    int num1, num2, smallest;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
    {
        smallest = num1;
    } else {
        smallest = num2;
    }
    printf("The smallest number is: %d\n", smallest);
    return 0;
}

/*
Enter two numbers: 
3
4
The smallest number is: 3
 */
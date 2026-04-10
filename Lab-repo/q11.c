// largest among 2
#include<stdio.h>
int main()
{
     int num1, num2, largest;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
     if (num1 > num2)
    {
        largest = num1;
    } else {
        largest = num2;
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}

/*

Enter two numbers: 
3
4
The largest number is: 4
*/
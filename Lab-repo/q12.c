// smallest among 3
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 < num2 && num1 < num3)
    {
        printf("The smallest is: %d\n", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("The smallest is: %d\n", num2);
    }
    else if (num3 < num1 && num3 < num2)
    {
        printf("The smallest is: %d\n", num3);
    }
    else
    {
        printf("There is no smallest number\n");
    }
    return 0;
}

/*
Enter three numbers: 
3
5
2
The smallest is: 2
*/
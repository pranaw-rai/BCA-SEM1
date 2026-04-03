// Find largest among 3
#include<stdio.h>
int main()
{
    float num1, num2, num3, largest;
    printf("Enter three numbers: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    } 
    if (num3 > largest) {
        largest = num3;
    }
    printf("The largest number is: %.2f\n", largest);
    return 0;
}

/*

Enter three numbers: 
34
567
2
The largest number is: 567.00
*/
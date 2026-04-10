// C program to convert celsius to fahrenheit

#include<stdio.h>
int main() 
{
    float celsius, fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 /5) + 32;
    printf("Temperature in fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}

// Output
/*
Enter temperature in celsius: 45
Temperature in fahrenheit is: 113.00
*/
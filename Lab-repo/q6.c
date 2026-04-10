#include<stdio.h>
int main()
{
    float principal, time, rate, simpleInterest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time(in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * time * rate) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}

// Output

/*
Enter Principal amount: 2000
Enter rate of interest: 2
Enter time(in years): 3
Simple Interest: 120.00
*/
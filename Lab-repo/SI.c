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
#include<stdio.h>
#include<math.h>

int main()
{
    float principal, rate, time, amount, compoundInterest;
     printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time(in years): ");
    scanf("%f", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compund Ineterest: %.2f\n", compoundInterest);
    printf("Total amount: %.2f\n", amount);
    return 0;
}
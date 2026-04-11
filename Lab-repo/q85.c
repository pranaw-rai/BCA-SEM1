#include <stdio.h>

// Function to calculate simple interest
float simpleInterest(float p, float t, float r) {
    return (p * t * r) / 100;
}

int main() {
    float principal, time, rate, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (years): ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    si = simpleInterest(principal, time, rate);

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

// Outpout

/*
Enter principal amount: 4000
Enter time (years): 2
Enter rate of interest: 4
Simple Interest = 320.00
*/
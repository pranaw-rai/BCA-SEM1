#include <stdio.h>

// function to check prime
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0; // not prime

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; // composite
    }

    return 1; // prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is a Composite number\n", num);

    return 0;
}

// Ouput

/*
Enter a number: 90
90 is a Composite number

Enter a number: 7
7 is a Prime number
*/
#include <stdio.h>

int main() {
    int num, temp, first, last, middle, place = 1;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    temp = num;

    // Get last digit
    last = temp % 10;

    // Get first digit and place value
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;

    // Remove first digit part
    middle = num % place;

    // Remove last digit
    middle = middle / 10;

    // Form new number after swapping
    int result = last * place + middle * 10 + first;

    printf("After swapping first and last digit: %d\n", result);

    return 0;
}

// Output

/*
Enter a 4-digit number: 4562
After swapping first and last digit: 2564
*/
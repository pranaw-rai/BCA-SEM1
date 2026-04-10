#include<stdio.h>
#include<math.h>

int main(){
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(original != 0){
        original /= 10;
        n++;
    }

    original = num;

    while(original != 0){
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if((int)result == num){
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number", num);
    }
    return 0;
}
// run =  gcc q27.c -o q27 -lm

// Output
/*
Enter a number: 371
371 is an Armstrong number


Enter a number: 372
372 is not an Armstrong number
*/
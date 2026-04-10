#include<stdio.h>
int main(){
    int num, reverse = 0, rem = 0;
    printf("Enter a number: ");
    scanf(" %d", &num);

    int check = num;

    if(num <= 0){
        printf("Invalid number! Usage: num > 0\n");
    } else {
        do{
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }while(num != 0);
        if(reverse == check){
            printf("It is palindrome");
        } else {
            printf("It is not palindrome");
        }
    }
    return 0;
}

// Output

/*
Enter a number: 1233456
It is not palindrome

Enter a number: 123454321
It is palindrome
*/
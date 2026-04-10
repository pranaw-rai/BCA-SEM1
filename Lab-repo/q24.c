#include<stdio.h>
int main(){
    int n, i;
    long long int fact = 1;
    printf("Enter a non negative number: ");
    scanf("%d", &n);

    if(n < 0){
        printf("factorial is not defined for negative num\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        fact *= i;
    }
    printf("Factorial of %d is %lld\n",n,fact);
    return 0;
}

// Output

/*
Enter a non negative number: 10
Factorial of 10 is 3628800
*/
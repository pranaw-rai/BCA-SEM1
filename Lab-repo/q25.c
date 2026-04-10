#include<stdio.h>
int main(){
    int n, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please enter a positive number\n");
        return 1;
    }

    printf("Divisor of %d are:\n", n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d",i);
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

// Output
/*
Enter a positive number: 54
Divisor of 54 are:
1
2
3
6
9
18
27
54

*/
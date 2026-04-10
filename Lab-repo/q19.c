#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d: \n", n);
    for(i = 1; i <= 10; i++){
        printf(" %d x %d = %d\n",n, i, n * i);
    }
    return 0;
}

// Output
/*
Enter a number: 5
Multiplication table of 5: 
 5 x 1 = 5
 5 x 2 = 10
 5 x 3 = 15
 5 x 4 = 20
 5 x 5 = 25
 5 x 6 = 30
 5 x 7 = 35
 5 x 8 = 40
 5 x 9 = 45
 5 x 10 = 50
*/
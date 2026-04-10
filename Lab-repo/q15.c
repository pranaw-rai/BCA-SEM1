#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid Input! Please enter a positive number\n");
        return 1;
    }

    printf("Odd numbers between 1 and %d\n", n);
    for(i = 1; i <= n; i += 2){
        printf("%d\n", i);
    }
    printf("\n");
    return 0;
}

// Output
/*
Enter a positive number: 10
Odd numbers between 1 and 10
1
3
5
7
9
*/
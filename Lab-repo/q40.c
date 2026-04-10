#include<stdio.h>
int main(){
    int a[100];
    int i, n, sum = 0;
    printf("Enter the number of elements to store in array: \n");
    scanf("%d", &n);

    printf("Input %d elements in array: \n", n);
    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCalculating Sum: \n");
    for(i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in an array is: %d\n", sum);
    return 0;
}

// Output

/*
Enter the number of elements to store in array: 
5
Input 5 elements in array: 
element - 0: 3
element - 1: 4
element - 2: 7
element - 3: 2
element - 4: 0

Calculating Sum: 
Sum of all elements stored in an array is: 16
*/
#include<stdio.h>
int main(){
    int i, n, a[100];

    printf("Enter no of values to input: ");
    scanf(" %d", &n);

    for(i = 0; i < n; i++)
    {
        printf(" element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe values are stored in array are: \n");
    for(i = 0; i < n; i++)
    {
        printf(" %5d", a[i]);
    }

    printf("\n\nThe values stored in array in reverse are: \n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("% 5d", a[i]);
    }
    printf("\n\n");
    return 0;
}


// Output

/*
Enter no of values to input: 5
 element - 0: 1
 element - 1: 2
 element - 2: 3
 element - 3: 4
 element - 4: 5

The values are stored in array are: 
     1     2     3     4     5

The values stored in array in reverse are: 
    5    4    3    2    1
    
*/
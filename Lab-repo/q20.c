#include<stdio.h>
int main(){
    int n, i;
    long long int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms(n > 2): ");
    scanf("%d", &n);
    if( n <= 2){
        printf("Invalid Input! n must be greater than 2\n");
        return 1;
    }

    printf("Fibonacci series upto %d terms\n",n);
    printf("%lld %lld", t1, t2);

    for(i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        printf(" %lld", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;

}

// Output

/*
Enter the number of terms(n > 2): 10
Fibonacci series upto 10 terms
0 1 1 2 3 5 8 13 21 34
*/
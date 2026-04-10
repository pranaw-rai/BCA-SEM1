#include<stdio.h>
int main()
{
    int i, j, space;
    for(i = 1; i <= 5; i++){
        for(space = 1; space <= 5 - i; space++){
            printf(" ");
        }
        for(j = i; j >= 1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// Output
/*
    1
   21
  321
 4321
54321
*/
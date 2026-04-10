#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b & c: ");
    scanf(" %lf %lf %lf", &a, &b, &c);

    if(a == 0){
        printf("Not a quadratic equation(a cannot b 0)\n");
        return 1;
    }

    discriminant = b *b - 4 * a * c;
    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant) / (2 * a));
        root2 = (-b - sqrt(discriminant) / (2 * a));
        printf("Roots are real and distict: %.2lf, %.2lf\n", root1, root2);
    }

    else if ( discriminant == 0){
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}

// Output

/*
Enter coefficients a, b & c: 3
4
5
*/
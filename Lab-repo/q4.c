// Program to find area and permieter of a circle

#include<stdio.h>
int main()
{
    float radius, area, perimeter;
    const float PI = 3.14159;
    printf("Enter radius of a circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("\nThe area of a circle is: %.2f", area);
    printf("\nThe perimeter of circle is: %.2f", perimeter);
    return 0;
}
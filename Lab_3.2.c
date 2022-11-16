#include <stdio.h>

void calculatePerimeter(float length, float width)
{
    float perimeter;
    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle = %.2f units ", perimeter);
}
int main()
{
    float length, width;

 
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    calculatePerimeter(length, width);
    return 0;
}

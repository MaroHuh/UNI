#include <stdio.h>
#define pi 3.14
// Omar Tarek 20250681
void findAreaAndCircumference(float radius)
{
    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;
    printf("Area of circle with radius %.2f = %.2f, Circumference = %.2f", radius, area, circumference);
}
int main() // Omar Tarek 20250681
{
    printf("Enter Circle Radius:");
    float radius;
    scanf("%f", &radius);
    findAreaAndCircumference(radius);
}
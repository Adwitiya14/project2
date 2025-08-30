#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;

    // Ask user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = pi *radius* radius;

    // Display the result
    printf("Area of the circle = %.2f", area);

    return 0;
}
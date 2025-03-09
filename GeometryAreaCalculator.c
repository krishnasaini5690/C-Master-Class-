#include <stdio.h>
int main() {
    int choice;
    float length, breadth, base, height, radius, area;
    const float PI = 3.14159;
    printf("Geometry Area Calculator\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2f\n", area);
            break;
        case 2:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }
    return 0;
}


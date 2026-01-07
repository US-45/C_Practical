#include <stdio.h>

int main() {
    float radius, pi;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    pi = 3.14;

    printf("The Area of the circle with radius %.2f is %.2f\n", radius, pi * radius *radius);
    printf("The circumference of the circle with radius %.2f is %.2f\n", radius, 2* pi * radius);

    return 0;
}
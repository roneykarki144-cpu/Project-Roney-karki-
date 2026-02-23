#include <stdio.h>
#include <math.h>

float circleArea(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float r = 5.0;
    float area = circleArea(r);
    printf("Area = %.2f\n", area);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float root1, root2, discriminant;
    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
     discriminant=b*b-4*a*c;
    root1=(-b + sqrt(discriminant))/(2*a);
    root2=(-b - sqrt(discriminant))/(2*a);
     printf("Root1 = %.2f\nRoot2 = %.2f\n",root1,root2);
    return 0;
}
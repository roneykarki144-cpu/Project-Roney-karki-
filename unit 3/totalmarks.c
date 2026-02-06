#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, average;
    printf("Enter marks for 5 subjects: \n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;

    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f\n", average);
return 0;
}
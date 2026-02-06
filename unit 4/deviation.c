#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
 float values[n], deviations[n];
    for(i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &values[i]);
        sum += values[i];
    } average = sum / n;
    printf("\nAverage = %.2f\n", average);
 printf("\nValue\t\tDeviation (Value - Average)\n");
    printf("------------------------------------------\n");
    for(i = 0;i < n;i++) {
        deviations[i] = values[i] - average;
        printf("%.2f\t\t%.2f\n", values[i], deviations[i]);
    }
 return 0;
}
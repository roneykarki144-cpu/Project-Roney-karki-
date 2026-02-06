#include <stdio.h>

int main() {
    float cost, salvage_value, depreciation;
    int years;
printf("--- Depreciation Calculator ---\n");
    printf("Enter the purchase price (Cost): ");
    scanf("%f", &cost);
printf("Enter the salvage value: ");
 scanf("%f", &salvage_value);

    printf("Enter the number of years of service: ");
    scanf("%d", &years);
    depreciation = (cost - salvage_value) / years;
    printf("\nResults:\n");
    printf("The annual depreciation is: %.2f\n", depreciation);
return 0;
}
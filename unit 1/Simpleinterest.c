#include <stdio.h>

int main() {
    float P,T,R,SI;
printf("Enter Principal ");
    scanf("%f",&P);
 printf("Enter Time ");
    scanf("%f",&T);
    printf("Enter Rate of Interest ");
    scanf("%f",&R);
 SI = (P * T * R) / 100;
 printf("Simple Interest = %.2f", SI);
 return 0;
}

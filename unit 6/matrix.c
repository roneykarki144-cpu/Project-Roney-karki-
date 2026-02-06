#include <stdio.h>

int main() {
    int n, i, max, min;
  printf("Enter the number of elements: ");
scanf("%d", &n);
 int arr[n];
  printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 max = arr[0];
    min = arr[0];
 for(i = 1; i < n; i++) {
     if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("\nArray in reverse order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d\n", min);
 return 0;
}
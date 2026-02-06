#include <stdio.h>

int main() {
    int secret = 42;
    int guess = 0;
 printf("Guess the secret number (between 1 and 50):\n");
while (guess != secret) {
     printf("Enter your guess: ");
        scanf("%d", &guess);
 if (guess < secret) {
            printf("Too low!\n");
        } else if (guess > secret) {
            printf("Too high!\n");
        } else {
            printf("Gotcha !You win.");
        }
    }
    return 0;
}
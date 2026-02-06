#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
 printf("\nThe ASCII value of '%c' is: %d\n", ch, ch);
    printf("Conversion results:\n");

    if (ch >= 'a' && ch <= 'z') {
        printf("Uppercase version: %c\n", ch - 32);
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Lowercase version: %c\n", ch + 32);
    } 
    else {
        printf("The character is not an alphabetic letter.\n");
    }
    return 0;
}
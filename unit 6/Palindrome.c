#include <stdio.h>

int main() {
    char str[100], upperStr[100];
    int length = 0, i, Palindrome = 1;
 printf("Enter a string: ");
    scanf("%s", str);
 while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length; i++) {
     if (str[i] >= 'a' && str[i] <= 'z') {
            upperStr[i] = str[i] - 32;
        } else {
            upperStr[i] = str[i];
        }
        if (str[i] != str[length - 1 - i]) {
            Palindrome = 0; 
        }
    }   upperStr[length] = '\0';

    printf("Uppercase string: %s\n", upperStr);
    
    if (Palindrome) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is NOT a Palindrome.\n");
    }
  return 0;
}
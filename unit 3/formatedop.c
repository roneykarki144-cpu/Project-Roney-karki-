#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int chars = 0;
    int spaces = 0;

    printf("Enter a line of text: ");
 fgets(text, sizeof(text), stdin);
    printf("\n--- Formatted Output ---\n");
    printf("Input String: [%s]", text);
    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] != '\n' && text[i] != '\0') {
            chars++;
              if (text[i] == ' ') {
                spaces++;     }
        }
    }
printf("Total Characters: %d\n",chars);
    printf("Total Spaces:%d\n",spaces);
  return 0;
}
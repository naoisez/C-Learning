#include <stdio.h>

int main() {
        
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);
    printf("Your character was %c\n", ch);

    char ch1;
    printf("Enter a character: ");
    ch1 = getchar();
    printf("\nYou Entered ");
    putchar(ch1);
}
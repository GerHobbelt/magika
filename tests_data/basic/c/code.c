#include <stdio.h>

int main(void) {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is a letter", c);
    else
        printf("%c is not a letter", c);

    return 0;
}

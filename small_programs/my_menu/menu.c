#include <stdio.h>
#include <ctype.h>

/* Excersise 1
Use Switch of If
The program asks for a character not a value
After pressing enter it shows you have entered "sign" which is a:
a) Alphabetic %c (A-Z or a-z)
b) Digit %c (0-9)
c) other sign %c (any other)
There is no need to use %d cause getchar recognizes %c and then recognizes what type of char it is.
Ascii codes: 48-57 if user types 0 he will get an 48.
*/


int main() {
    char znak;
    printf("Prosze wprowadzic znak:");
    znak = getchar();

    if (isdigit(znak)) {
        printf("Wpisales cyfre: %c.", znak);
        printf("\nDla ASCII jest to %d.", znak);
    } else if (isalpha(znak)) {
        printf("Wpisales litere: %c", znak);
    } else {
        printf("Wpisales inny znak: %c", znak);
    }

    return 0;
}
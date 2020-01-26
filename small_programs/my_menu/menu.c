#include <stdio.h>
#include <ctype.h>

/*
Uzyc switch / if
program prosi by wprowdzic dowolny znak z klawiatury,
po wcisnieciu entera pokazuje "wprowadziles..."
a) litere %c (if A-Z lub a-z)
b) cyfre %c (if 0-9)
c) znak %c (pozostaly przypadek)
nie ma potrzeby uzywac %d (przyklad b) bo interpretowane jest to jako znak
0 - 9 rowniez. kody ascii? 48-56 jesli uzytkownic wprowadzi 0 to dostanie 48.
*/


int main() {
    char znak;
    printf("Prosze wprowadzic znak:");
    znak = getchar();

    if (isdigit(znak)) {
        printf("Wpisales cyfre: %c", znak);
    } else if (isalpha(znak)) {
        printf("Wpisales litere: %c", znak);
    } else {
        printf("Wpisales inny znak: %c", znak);
    }

    return 0;
}
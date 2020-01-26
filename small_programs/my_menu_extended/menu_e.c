#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Excercise 2
Petle while, do while lub for
Cykl powtarza sie tak dlugo dopoki uzytkownik nie wcisnie Entera /nowej linii
enter opuszcza bufor na samym koncu>> ?
jesli wpisze sie kilka znakow abcfdjksdf to one opuszcza (wszystkie) bufor wraz z enterem
program musi je odsylac lub polykac.
*/


int main() {
    char input; 
    while (1)
    {
        printf("\nProsze wprowadzic znak: ");
        input = getchar();
        printf("Wprowadziles znak: %c", input);
        if (isspace(input)) {
            printf("Wprowadziles spację lub pusty znak");
            exit(0);
        }    
    }
}

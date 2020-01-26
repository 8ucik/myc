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
    int result; 
    int i = 0;
    while (i <= 20)
    {
        printf("Prosze wprowadzic znak: \n");
        input = getchar();
        result = isspace(input);

        if (isalpha(input)) {
            printf("Wprowadziles znak: %c\n", input);
        } else if (result) {
            printf("Wprowadziles spację lub pusty znak.\n");
            exit(0);
        }   
    } 
}

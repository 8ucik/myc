#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


/*Założenia:
1. Uzytkownik jest pytany jaki mam dzisiaj dzien
2. Uzytkownik odpowiada: Pon - Niedziela.
- osobne pliki dla poniedzialku, osobne dla wtorku itd... 
3. Dni tygodnia sa sprawdzane zgodnie z data z kompa.
4. Jesli sklamie, ze dzisiaj jest niedziela, to dostanie pouczenie, ze brzydko to klamac. 
5. Po wpisaniu poprawnie dnia tygodnia dostanie mila sentencje z biblii? lub czegos jeszcze innego.
6. Sentencja zostanie wyprintowana na wiekszej czcionce
7. Sentencja trafi jako plik txt lub MD.
*/

int main () {
    char str[10];
    printf("Jaki mamy dzisiaj dzień?\n");
    scanf("%s", str);
    if (isdigit(str)) {
        printf("Wpisales: %c. \nChodzilo o podanie dokladnego dnia: \n(Pon, Wto, Sro, Czw, Pia, Sob, Nie). \nPozdrawiam.", *str);
        exit(0);
    } 
    if (strcmp(str, "pon")) {
        printf("Sentencja dla dnia %s iedzialek, to ABC", str);
    }
    return 0;
}
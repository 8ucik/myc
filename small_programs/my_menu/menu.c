#include <stdio.h>
#include <ctype.h>

/* Excercise 2
Petle while, do while lub for
Cykl powtarza sie tak dlugo dopoki uzytkownik nie wcisnie Entera /nowej linii
enter opuszcza bufor na samym koncu>> ?
jesli wpisze sie kilka znakow abcfdjksdf to one opuszcza (wszystkie) bufor wraz z enterem
program musi je odsylac lub polykac.
*/

int main() {
	char znak;
	while(1) {
		printf("\nProsze wprowadzic znak:");
		znak = getchar();
		getchar();
		if (znak == '\n')
			break;
		if (isdigit(znak)) {
	 			printf("Wpisales cyfre: %c.", znak);
	   			printf("\nDla ASCII jest to %d.", znak);
 		} else if (isalpha(znak)) {
    			printf("\nWpisales litere: %c", znak);
 		} else {
	   			printf("\nWpisales inny znak: %c", znak);
  		}
		while('\n' != getchar());
	}
	return 0;
}


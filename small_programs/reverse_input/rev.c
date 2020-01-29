#include <stdio.h>
#include <string.h>


/* Zadanie:
 * a) wprowadz dowolny  ciag znakow i zakoncz enterem (polecenie z programu my_menu)
 * b) uzytkownik wprowadza np abcdf1234 + enter,
 * c) program wyswietla znaki w odwrotnej kolejnosci: 4321
 * Program powinien umozliwic wprowadzenie dowolnej ilosci znakow
 * Wersja light: niech zadziala przynajmniej dla 10 znakow
 */

// wymiana char na poczatku i na koncu i dazenie do srodka

#define STR_SIZE 100
#define BEGIN 0
#define PYTANIE "Wprowadz ciag znakow.\n"
#define ODPOWIEDZ "\nWprowadzony ciag znakow w odwrotnej kolejnosci to: %s"

int main() {

	char input[STR_SIZE], temp;
	int i, j = BEGIN;

	printf(PYTANIE);
	scanf("%s", input);

	j=strlen(input)-1;
	while(i<j) {
		temp = input[j];
		input[j]=input[i];
		input[i]=temp;
		i++;
		j--;
	}
	printf(ODPOWIEDZ, input);

	return (0);
}

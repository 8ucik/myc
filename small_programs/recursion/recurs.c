/* 
 *	Demonstracja rekurencji
 *	i prostej funkcji
 */

#include <stdio.h>

void push_number(int n);

int main(void){
	/* umiesc 1 na stosie */
	push_number(1);
	return 0;
}

void push_number(int n){
	/* jesli na stosie jest 4, zdejmij ja */
	if(n == 4)
	    return;
	/* umiesc numer o 1 wiekszy na stosie */
	push_number(n + 1);
	/* wyswietla sie od konca: 3,2,1 */
	printf("%d\n",n);
	return;
}

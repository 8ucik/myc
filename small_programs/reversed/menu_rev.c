/* Take character input from user
 * and print in reverse order
 */
#include <stdio.h>

void reverse(int);

int main(void){
	
	int ch;
	printf("Wprowadz ciag znakow: ");
	ch = getchar();
	reverse(ch);

	return 0;

}

void reverse(int tmp){
	int ch;
	if(tmp == '\n')
		return;
	ch = getchar();
	reverse(ch);
	printf("%c",tmp);

}


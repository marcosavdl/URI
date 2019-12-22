#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int a, b, c;
	scanf(" %i", &a);
	scanf(" %i", &b);

	c = a+b;

	printf("SOMA = %i\n", c);



	return 0;
}



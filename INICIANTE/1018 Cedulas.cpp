#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	unsigned int entrada, cem, cinq,vinte, dez,cinco, dois,um;


	scanf(" %i", &entrada);

	printf("%i\n", entrada);

	cem=entrada/100;
	entrada %= 100;

	cinq=entrada/50;
	entrada%=50;

	vinte=entrada/20;
	entrada%=20;

	dez=entrada/10;
	entrada%=10;

	cinco=entrada/5;
	entrada%=5;
	
	dois=entrada/2;
	entrada%=2;

	um=entrada/1;
	entrada%=1;

	printf("%i nota(s) de R$ 100,00\n", cem);
	printf("%i nota(s) de R$ 50,00\n", cinq);
	printf("%i nota(s) de R$ 20,00\n", vinte);
	printf("%i nota(s) de R$ 10,00\n", dez);
	printf("%i nota(s) de R$ 5,00\n", cinco);
	printf("%i nota(s) de R$ 2,00\n", dois);
	printf("%i nota(s) de R$ 1,00\n", um);

	
	return 0;
}



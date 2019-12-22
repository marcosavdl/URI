#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	float entrada, resultado;
	int cem, cinq,vinte, dez,cinco, dois,um,inteiro ;


	scanf(" %f", &entrada);

	 inteiro=entrada/1;
	 resultado = (entrada-(float)inteiro)*100;

	 printf("%i %f\n", inteiro,resultado);







	// printf("%.2f\n", entrada);

	cem=inteiro/100;
	inteiro =(int)inteiro % 100;

	cinq=inteiro/50;
	inteiro%=50;

	vinte=inteiro/20;
	inteiro%=20;

	dez=inteiro/10;
	inteiro%=10;

	cinco=inteiro/5;
	inteiro%=5;
	
	dois=inteiro/2;
	inteiro%=2;

	um=inteiro/1;
	inteiro%=1;

	
	printf("%f\n", entrada);

	printf("%i nota(s) de R$ 100,00\n", cem);
	printf("%i nota(s) de R$ 50,00\n", cinq);
	printf("%i nota(s) de R$ 20,00\n", vinte);
	printf("%i nota(s) de R$ 10,00\n", dez);
	printf("%i nota(s) de R$ 5,00\n", cinco);
	printf("%i nota(s) de R$ 2,00\n", dois);
	printf("%i nota(s) de R$ 1,00\n", um);

	
	return 0;
}



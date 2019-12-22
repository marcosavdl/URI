#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int distancia;
	double combustivel, media;

	scanf(" %d", &distancia);
	scanf(" %lf", &combustivel);

	media = distancia/combustivel;

	printf("%.3lf km/l\n", media);



	
	return 0;
}



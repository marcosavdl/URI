#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	char nome[10];
	double salario, vendas;

	scanf(" %s", nome);
	scanf(" %lf", &salario);
	scanf(" %lf", &vendas);

	salario += (vendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", salario);



	return 0;
}



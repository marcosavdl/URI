#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int num_fun, horas_trabalhadas;
	float salario;

	scanf(" %d", &num_fun);
	scanf(" %d", &horas_trabalhadas);
	scanf(" %f", &salario);

	salario *= horas_trabalhadas;

	printf("NUMBER = %d\n", num_fun);
	printf("SALARY = U$ %.2f\n", salario);



	return 0;
}



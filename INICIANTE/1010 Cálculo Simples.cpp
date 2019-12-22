#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int codigo1, codigo2, num1, num2;
	float valor1, valor2, total;

	scanf(" %d %d %f", &codigo1,&num1,&valor1);
	scanf(" %d %d %f", &codigo2,&num2,&valor2);

	total = (num1*valor1)+(num2*valor2);

	printf("VALOR A PAGAR: R$ %.2f\n", total);	





	return 0;
}



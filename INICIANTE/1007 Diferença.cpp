#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int a, b, c, d, diferenca;

	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);
	scanf(" %d", &d);

	diferenca = (a*b)-(c*d);

	printf("DIFERENCA = %d\n", diferenca);



	return 0;
}



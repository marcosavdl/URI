#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	int PROD, a, b;

	scanf(" %i", &a);
	scanf(" %i", &b);

	PROD = a*b;

	printf("PROD = %i\n", PROD);


	
	return 0;
}



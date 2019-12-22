#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");
	int k;
	k=2;



	int A,B,X;

	scanf(" %i", &A);

	scanf(" %i", &B);

	X = A + B;

	printf("X = %i\n", X);




	return 0;
}

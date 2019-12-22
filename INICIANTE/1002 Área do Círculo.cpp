#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){

	setlocale(LC_ALL , "portuguese");

	double area, n, raio;

	n = 3.14159;

	scanf(" %lf", &raio);

	area = pow(raio,2) * n;

	printf("A=%.4lf\n", area);



	return 0;
}

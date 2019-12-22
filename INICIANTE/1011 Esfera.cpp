#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){

	setlocale(LC_ALL , "portuguese");

	double parte, pi, R, volume;

	parte = 4.0/3.0;
	pi = 3.14159;
	scanf(" %lf", &R);

	volume = parte * pi*pow(R,3);

	printf("VOLUME = %.3lf\n", volume);



	return 0;
}



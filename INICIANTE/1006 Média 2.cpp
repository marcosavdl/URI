#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL , "portuguese");

	double a, b, c, media;

	scanf(" %lf", &a);
	scanf(" %lf", &b);
	scanf(" %lf", &c);

	media = ((a*2)+(b*3)+(c*5))/10;

	printf("MEDIA = %.1lf\n", media);



	return 0;
}



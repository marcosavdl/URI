#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){

	setlocale(LC_ALL , "portuguese");

	double a, b, media;

	scanf(" %lf", &a);
	scanf(" %lf", &b);

	media = ((a*3.5)+(b*7.5))/11;

	 printf("%lf\n", media);



	if (media >= 10){
		printf("MEDIA = 10.00000\n");
	}else printf("MEDIA = %.5lf\n", media);


	return 0;
}



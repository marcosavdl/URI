#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){

	setlocale(LC_ALL , "portuguese");

	int a,b,c,maiorAB,maiorFinal;

	scanf(" %d %d %d", &a,&b,&c);

	maiorAB = (a+b+abs(a-b))/2;
	maiorFinal = (maiorAB+c+abs(maiorAB-c))/2;

	printf("%d eh o maior\n",maiorFinal);
	




	return 0;
}



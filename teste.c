#include<stdio.h>

int soma(int,int);

int main(void){

	int alg1, alg2;

	printf("Digite dois números para serem somados: ");
	scanf("%d%d",&alg1,&alg2);

	printf("A soma de %d + %d é %d.\n",alg1,alg2, soma(alg1,alg2));
	return 0;

}

int soma(int num1, int num2){

	return num1 + num2;

}

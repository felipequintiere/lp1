
// 2.c Faça um programa que leia dois valores e exiba o maior valor lido.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n1, n2;
	printf("Escolha o primeiro valor numérico: ");
	scanf("%f", &n1);
	printf("Escolha o segundo valor numérico: ");
	scanf("%f", &n2);

	if (n1 > n2)
	{
		printf("%f\n",n1);
	}
	else if (n2 > n1)
	{
		printf("%f\n",n2);
	}
	else
	{
		printf("valores iguais: %f e %f\n",n1,n2);
	}
	exit(0);
}


// 2.c Faça um programa que leia dois valores e exiba o maior valor lido.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n1, n2;

	printf("Escolha dois valores numéricos [n1 n2]: ");
	scanf("%f%f", &n1, &n2);

	// cascated if statements (p.80 - c programming a modern approach)
	if (n1 > n2) printf("\nO maior valor é n1: %f\n",n1);
	else
		if (n2 > n1) printf("\nO maior valor é n2: %f\n",n2);
		else printf("\nValores iguais: %f e %f\n",n1,n2);

	// conditional expressions (p.83-84 - c programming a modern approach)
	/*
	printf("\nO maior valor é: %f\n",(n1 > n2 ? n1 : n2));
	exit(0);
	*/

	exit(0);
}


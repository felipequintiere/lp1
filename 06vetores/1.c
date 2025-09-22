/*
Crie um vetor de tamanho máximo fixo na função main, ex:
int vec[100];

Crie uma função preenche que receba um vetor xs de inteiros, uma quantidade n e preencha o vetor xs com n números lidos do teclado:

void preenche (int* xs, int n);

Crie uma função media que receba um vetor xs, a quantidade de elementos n no vetor xs e retorne a média entre todos os valores do vetor.

Dentro das funções, use a notação de ponteiros em vez da de índices (* vs [])

Crie um programa que leia um número e preencha o vetor vec com essa quantidade de elementos e em seguida calcule a média dos valores do vetor.
*/
#include <stdio.h>
#define N 10

void preenche(int *xs, int n);
void media(int *xs, int n);

int main(void)
{
	int vec[N] = {0};

	preenche(vec,N);
	media(vec,N);
	printf("\n");

	return 0;
}

void preenche(int *xs, int n)
{
	for (int *p = xs; p < xs + n; p++)
		//scanf("%d", &*p);
		// equivalente a:
		scanf("%d", p);

	int *p = xs;
	while (p < xs + n)
		//printf("%d\n", *(p++));
		// equivalente a:
		printf("%d\n",*p++);
}

void media(int *xs, int n)
{
	float soma = 0.0f;

	for (int i = 0; xs + i < xs + n; i++)
		soma += *(xs+i);

	printf("%f", soma/n);	
}

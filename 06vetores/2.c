/*
    Crie um vetor vet de 5 posições.
    Leia 5 números e guarde-os em vet.
    Exiba todos os números de vet.
    Leia um outro número I.
    Remova o valor de vet no índice I.
        Mantenha o vetor sem buracos!
        As posições vazias devem ser preenchidas com 0.
Exemplo:

	| 90 | 55 | 15 | 70 | 10 |

Após remover I=2:

	| 90 | 55 | 70 | 10 |  0 |
*/
#include <stdio.h>
#define N 5

void escrever(int *v, int n);
void mostrar(int *v, int n);
void remover(int *v, int n);

int main(void)
{
	int indice, v[N] = {0};

	escrever(v, N);
	mostrar(v,N);
	remover(v,N);

	return 0;
}

void escrever(int *v, int n)
{
	printf("Insira %d valores: ", n);
	for (int i = 0; v + i < v + n; i++)
		scanf("%d",v+i);

	printf("\n");
}

void mostrar(int *v, int n)
{
	printf("Valores:\n");
	for (int i = 0; v + i < v + n; i++)
		printf("%d ",*(v+i));
	printf("\n\n");

}

void remover(int *v, int n)
{
	int indice;

	printf("Selecione o índice a ser removido: ");
	scanf("%d", &indice);
	printf("\n");

	*(v+indice) = 0;

	while (v+indice < v+n-1)
	{
		*(v+indice) = *(v+indice+1);
		*(v+indice+1) = 0;
		indice++;
	}

	mostrar(v,N);
}

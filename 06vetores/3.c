/*
    Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e preencha o array com l*c números lidos do teclado, ex:

void preenche (int arr[L][C], int l, int c);

    Crie uma função media que receba um array bidimensional arr, a quantidade de linhas l, a quantidade de colunas c, e retorne a média entre todos os valores do array, ex:

float media (int arr[L][C], int l, int c);

L e C devem ser quaisquer valores constantes predefinidos.
*/
#include <stdio.h>
#define L 10
#define C 10

void preenche(int arr[][C], int l, int c);
void mostrar(int arr[][C], int l, int c);
float media(int arr[][C], int l, int c);

int main(void)
{
	int l, c, arr[L][C] = {0};

	printf("Número de linhas e colunas [L C]: ");
	scanf("%d%d", &l, &c);

	preenche(arr, l, c);
	mostrar(arr, l, c);
	printf("\nMédia: %f\n", media(arr,l,c));

	return 0;
}

void preenche(int arr[][C], int l, int c)
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);
}

void mostrar(int arr[][C], int l, int c)
{
	printf("\nArray após a função preenche():\n");
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
}

float media(int arr[L][C], int l, int c)
{
	float soma = 0.0f;

	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
			soma += arr[i][j];

	return soma/(l*c);
}

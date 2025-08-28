/*
    Crie um vetor para guardar 50 temperaturas:
        int temps[50];
    As temperaturas variam entre -100 e 100
    Leia as 50 temperaturas para o vetor
    Calcule a média das temperaturas no vetor
    Exiba a quantidade de leituras acima da média calculada
    Em vez de int, use o tamanho mais econômico
        (Mas lembre-se que o "%d" do scanf só funciona com o tipo int)
*/

#include <stdio.h>

int main(void)
{
	int soma = 0, iteracoes = 4, acima_da_media = 0;
	char temps[iteracoes], temp_lida;
	float media;

	printf("Insira as temperaturas: ");
	for (char i = 0; i < iteracoes; i++) {
		scanf("%hhd",&temp_lida);
		temps[i] = temp_lida;
		soma += temps[i];
	}

	for (int i = 0; i <= iteracoes; i++) {
		if (temps[i] > soma/iteracoes) 
			acima_da_media += 1;
	}

	printf("Quantidade de leituras acima da média: %d\n",
	acima_da_media);

	return 0;
}


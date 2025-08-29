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
	char iteracoes = 4;
	char temps[iteracoes], temp_lida, acima_da_media = 0;
	float soma = 0.0f; /* para evitar que soma/iteracoes resulte em um int truncado */

	printf("Insira as temperaturas (entre -100 e 100): ");
	for (char i = 0; i < iteracoes; i++) {
		do {
		    scanf("%hhd", &temp_lida);
		} while (temp_lida < -100 || temp_lida > 100);

		temps[i] = temp_lida;
		soma += temp_lida;
	}

	for (char i = 0; i < iteracoes; i++) {
		if (temps[i] > soma/iteracoes) 
			acima_da_media += 1;
	}

	printf("Quantidade de leituras acima da média: %d\nMédia: %.2f\n",
	acima_da_media,soma/iteracoes);

	return 0;
}


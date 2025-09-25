/*
    Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito.
    Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
    Crie três exemplos de atletas variando as propriedades e teste a função de exibição.
*/
#include <stdio.h>
#define STR_LEN 100

struct propriedades{
	char nome[STR_LEN+1];
	int numero_carro;
	int idade;
	int vitorias;
	int melhor_volta;
};

void exibir_propriedades(struct propriedades p);

int main() {
	struct propriedades piloto1 = {.nome="Max Verstappen", .numero_carro=1, .idade=28, .vitorias=63, .melhor_volta=420};
	struct propriedades piloto2 = {.nome="Lewis Hamilton", .numero_carro=2, .idade=40, .vitorias=105, .melhor_volta=110};
	struct propriedades piloto3 = {
		.nome="Charles Leclerc", .numero_carro=3, .idade=27, .vitorias=8, .melhor_volta=190
	};

	exibir_propriedades(piloto1);
	exibir_propriedades(piloto2);
	exibir_propriedades(piloto3);

	return 0;
};

void exibir_propriedades(struct propriedades p)
{
	printf("%-20s %s\n", "Nome:", p.nome);
	printf("%-20s %d\n", "N[umero do Carro:", p.numero_carro);
	printf("%-20s %d\n", "Idade:", p.idade);
	printf("%-20s %d\n", "Vit[orias:", p.vitorias);
	printf("%-20s %ds\n\n", "Melhor Volta:", p.melhor_volta);
}


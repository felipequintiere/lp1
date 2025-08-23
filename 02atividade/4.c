
// 4.c Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.
#include <stdio.h>
#define TAXA_DE_CONVERSÃO (1.6f)

int main(void)
{
	float vel = 1.0f;

	while (vel != 0)
	{
		printf("Determine a velocidade em mph: ");
		scanf("%f",&vel);

		if ((vel * TAXA_DE_CONVERSÃO) < 80.0f) 
		{
			printf("Acelere\n");
		}
		else if ((vel * TAXA_DE_CONVERSÃO) > 100.0f) 
		{
			printf("Desacelere\n");
		}
		else
		{
			printf("Mantenha\n");
		}
	}

	return 0;
}


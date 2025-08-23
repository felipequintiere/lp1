
// 7.c
// O Campeonato Brasileiro está na reta final com 20 times na disputa.

// Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.

// Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.
#include <stdio.h>

int main(void)
{

	int aux = 0, min = 0, max = 0;
	int linhas = 20, colunas = 2;
	int times[linhas][colunas];

	for (int i = 0; i < linhas; i++)
	{
		int vit, emp;

		printf("\ninsira o identificador do time: ");
		scanf("%d",&times[i][0]);
		printf("número de vitórias: ");
		scanf("%d",&vit);
		printf("número de empates: ");
		scanf("%d",&emp);

		times[i][1] = 3*vit + emp;
	}

	printf("\nid\t\tpontuação\n");
	for (int i = 0; i < linhas; i++)
	{
		printf("%d\t\t%d\n",times[i][0],times[i][1]);
	}
	printf("\n");

	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] > aux)
		{
			aux = times[i][1];
			max = i;
		}
	}

	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] < aux)
		{
			aux = times[i][1];
			min = i;
		}
	}

	printf("time de maior pontuação: %d\n",times[max][0]);
	printf("time de menor pontuação: %d\n",times[min][0]);

	return 0;
}

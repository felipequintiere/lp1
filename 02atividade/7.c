
// 7.c
// O Campeonato Brasileiro está na reta final com 20 times na disputa.

// Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.

// Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.
#include <stdio.h>

int main(void)
{
	int max, min, aux, vitoria, empate, linhas = 4, colunas = 2;
	max = min = aux = 0;
	int times[linhas][colunas];

	printf("\nInsira (na mesma linha) [id vitórias empates]\n");
	for (int i = 0; i < linhas; i++)
	{
		printf("time %d: ",i+1);
		scanf("%d%d%d",&times[i][0], &vitoria, &empate);
		times[i][1] = 3*vitoria + empate;
	}

	printf("\n%10s\t\t%10s\n","id","pontuação");
	for (int i = 0; i < linhas; i++)
	{
		printf("%10.1d\t\t%10.1d\n",times[i][0],times[i][1]);
	}

	// pontuação máxima
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] > aux)
		{
			aux = times[i][1];
			max = i;
		}
	}
	printf("\nID(s) do(s) time(s) de maior pontuação: \n");
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] == times[max][1]) 
			printf("%10.1d\n",times[i][0]);
	}

	// pontuação mínima
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] < aux)
		{
			aux = times[i][1];
			min = i;
		}
	}
	printf("\nID(s) do(s) time(s) de menor pontuação: \n");
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] == times[min][1]) 
			printf("%10.1d\n",times[i][0]);
	}

	return 0;
}

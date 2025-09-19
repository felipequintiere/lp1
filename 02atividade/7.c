
// 7.c
// O Campeonato Brasileiro está na reta final com 20 times na disputa.

// Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.

// Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.
#include <stdio.h>

int main(void)
{
	int linhas = 4;
	int times[linhas][2];
	int vitoria, empate;
	int max_index = 0, min_index = 0;

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

		if (times[i][1] > times[max_index][1])
			max_index = i;
		if (times[i][1] < times[min_index][1])
			min_index = i;
	}

	printf("\nID(s) do(s) time(s) de maior pontuação: \n");
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] == times[max_index][1]) 
			printf("%10.1d\n",times[i][0]);
	}

	printf("\nID(s) do(s) time(s) de menor pontuação: \n");
	for (int i = 0; i < linhas; i++)
	{
		if (times[i][1] == times[min_index][1]) 
			printf("%10.1d\n",times[i][0]);
	}

	return 0;
}


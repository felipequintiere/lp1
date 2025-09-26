/*
    Crie uma função que leia um personagem (use a struct do exercício anterior).
    A função deve usar uma função que lê a posição.
    Crie um loop para ler todos os 10 personagens
    Desenhe um mapa do jogo.
        Use funções auxiliares!
        Exemplo:
   0 1 2 3 4 5 6 7 8 9

0          8
1    0
2 
3              3
4 
5                  7
6      2
7 
8          9
9                  5
*/
#include <stdio.h>
#define L 10 // número de linhas
#define C 10 // número de colunas
#define N 2 // número de personagems

struct posicao{
	int x;
	int y;
};

struct personagem{
	int ident;
	int pont;
	struct posicao pos;
};

void preenche_personagem(struct personagem *p);
void mostrar_personagem(struct personagem *p);
void desenhar_mapa(struct personagem *p, int n);

int main(void)
{
	struct personagem vet_personagem[N];
	preenche_personagem(vet_personagem);
	mostrar_personagem(vet_personagem);
	desenhar_mapa(vet_personagem, N);

	return 0;
}

void preenche_personagem(struct personagem *p)
{
	for (int i = 0; i < N; i++)
	{
		printf("\n\nInsira a identidade: ");
		scanf("%d", &(p+i)->ident); 
		//printf("Insira a pontuação: ");
		//scanf("%d", &(p+i)->pont); 
		printf("Insira a abscissa e ordenada [x y]: ");
		scanf("%d%d", &(p+i)->pos.x, &(p+i)->pos.y); 
	}
}

void mostrar_personagem(struct personagem *p)
{
	for (int i = 0; i < N; i++)
	{
		printf("\n\nIdentidade do personagem %d: %d\n",
		i+1,(p+i)->ident); //ou 'i+1,(*(p+i)).ident);'
		/*
		printf("pontuação do personagem %d: %d\n",
		i+1,(p+i)->pont); //ou 'i+1,(*(p+i)).pont);'
		*/
		printf("posição x do personagem %d: %d\n",
		i+1,(p+i)->pos.x); //ou 'i+1,(*(p+i)).pos.x);'
		printf("posição y  do personagem %d: %d\n",
		i+1,(p+i)->pos.y); //ou 'i+1,(*(p+i)).pos.y);'
	}
}

void desenhar_mapa(struct personagem *p, int n)
{
	int x, y;

	int map[L][C] = {0};

	for (int i = 0; i < n; i++)
	{
		x = (*(p+i)).pos.x; // ou (p+1)->pos.x
		y = (*(p+i)).pos.y; // ou (p+1)->pos.y
		map[x][y] = (*(p+i)).ident;
	}

	printf("obs.: [x y] representam as linhas e colunas, respectivamente\n"
	"0 1 2 3 4 5 6 7 8 9\n");
	for (int i = 0; i < L; i++)
	{
		printf("%d ",i);
		for (int j = 0; j < C; j++)
		{
			if (map[i][j] == 0)
				printf(". ");
			else
				printf("%d ", map[i][j]);	
		}
		printf("\n");
	}
}

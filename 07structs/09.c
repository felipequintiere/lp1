/*
    Um jogo possui 10 personagens, cada um com as seguintes características:
        Um número que representa a sua "identidade".
        Um posição (x,y) no espaço bi-dimensional.
        Uma quantidade de pontuação (inicialmente 0).
    Crie uma struct para representar um personagem.
        A posição também deve ser uma struct.
    Crie um vetor com 10 personagens.
*/
#include <stdio.h>
#define N 2

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

int main(void)
{
	struct personagem vet_personagem[N];

	preenche_personagem(vet_personagem);
	mostrar_personagem(vet_personagem);
	return 0;
}

void preenche_personagem(struct personagem *p)
{
	for (int i = 0; i < N; i++)
	{
		printf("\n\nInsira a identidade: ");
		scanf("%d", &(p+i)->ident); 
		printf("Insira a pontuação: ");
		scanf("%d", &(p+i)->pont); 
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
		printf("pontuação do personagem %d: %d\n",
		i+1,(p+i)->pont); //ou 'i+1,(*(p+i)).pont);'
		printf("posição x do personagem %d: %d\n",
		i+1,(p+i)->pos.x); //ou 'i+1,(*(p+i)).pos.x);'
		printf("posição y do personagem %d: %d\n",
		i+1,(p+i)->pos.y); //ou 'i+1,(*(p+i)).pos.y);'
	}
}


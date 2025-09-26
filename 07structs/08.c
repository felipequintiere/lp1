/*
    Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
    Crie uma função para preencher 1 ponto.
    Na main, crie um vetor com dez pontos.
    Crie uma função para preencher um vetor de pontos.
    Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).
*/
#include <stdio.h>
#define M 3

struct coordenada{
	int x;
	int y;
};

void preencher_ponto(struct coordenada *ponto);
void preencher_vetor_de_pontos(struct coordenada vetor_ponto[], int n);
struct coordenada vetor_mais_distante(struct coordenada vetor_ponto[], int n);

int main(void)
{
	struct coordenada ponto1;
	struct coordenada vetor_ponto1[M];

	printf("Determine [x y]: ");
	preencher_ponto(&ponto1);

	printf("\n\n");

	preencher_vetor_de_pontos(&vetor_ponto1[0], M); 

	struct coordenada output = vetor_mais_distante(vetor_ponto1, M);

	printf("Dos %d pontos, o(s) ponto(s) de abscissa %d e ordenada %d é/são "
	"o(s) mais distante(s) de (0,0)\n", M, output.x, output.y);

	return 0;
}

void preencher_ponto(struct coordenada *ponto)
{
	scanf("%d%d", &ponto->x, &(*ponto).y);
}

void preencher_vetor_de_pontos(struct coordenada vetor_ponto[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Ponto %d/%d [x y]: ", i+1, n);
		preencher_ponto(&vetor_ponto[i]);
	}
}

struct coordenada vetor_mais_distante(struct coordenada vetor_ponto[], int n)
{
	int dist = -1;
	int ord = 0;

	struct coordenada p1;
	int d1;
	for (int i = 0; i < n; i++)
	{
		p1 = vetor_ponto[i];
		d1 = p1.x*p1.x + p1.y*p1.y;
		printf("%d\n",d1);

		if (d1 >= dist)
		{
			dist = d1;
			ord = i;
		}
		else  if (d1 == dist)
		{
			printf("os pontos %d e %d têm a mesma distância\n\n", i+1, i+2);
			ord = i;
		}
	}

	return vetor_ponto[ord];
}

/* (linhas 26)
quando usado 'preencher_vetor_de_pontos(*(vetor_ponto1+0), M)'
ou 'preencher_vetor_de_pontos(vetor_ponto[0]), M)':

8.c:17:50: note: expected ‘struct coordenada *’ but argument is of type ‘struct coordenada’
   17 | void preencher_vetor_de_pontos(struct coordenada vetor_ponto[], int n);
      |                                ~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~

formas alternativas:
	preencher_vetor_de_pontos(vetor_ponto1+0, M);
	preencher_vetor_de_pontos(vetor_ponto1, M);
*/

//linha 42, forma equivalente: preencher_ponto(vetor_ponto+i);

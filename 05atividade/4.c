/*
Crie uma função troca que receba dois ponteiros para inteiros p1 e p2 e troque os conteúdos por eles apontados:

int x=10, y=20;
troca(&x, &y);              // definir essa funcao
printf("%d %d\n", x, y);    // 20 10
*/
#include <stdio.h>

void troca(int* x, int*y)
{
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main(void)
{
	int x, y;

	printf("Selecione dois valores inteiros [x - y]: ");
	scanf("%d%d",&x,&y);

	troca(&x, &y);	
	printf("%d %d\n", x, y);

	return 0;
}

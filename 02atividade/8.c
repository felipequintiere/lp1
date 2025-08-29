
/* 8.c
 * Ler dois números n1 e n2
 * Exibir todos os números entre n1 e n2
 * Fazer em Python e em C
*/
#include <stdio.h> 

int main(void)
{
	int n1,n2;

	printf("\nInsira dois números inteiros [n1 n2]: ");
	scanf("%d%d",&n1,&n2);

	for (int i = n1; i <= n2; i++) printf("%d\n",i);

	return 0;
}
    

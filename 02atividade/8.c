
/* 8.c
 * Ler dois números n1 e n2
 * Exibir todos os números entre n1 e n2
 * Fazer em Python e em C
*/
#include <stdio.h> 

int main(void)
{
	int n1,n2;
	printf("\ninsira o valor de n1: ");
	scanf("%d",&n1);
	printf("insira o valor de n2: ");
	scanf("%d",&n2);

	for (int i = n1; i <= n2; i++)
	{
		printf("\n%d",i);
	}
	printf("\n\n");

	return 0;
}
    
    


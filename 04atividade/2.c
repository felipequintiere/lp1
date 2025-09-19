/*
2.c
Crie uma função todos_os_primos que recebe um inteiro max e exibe todos os primos entre 1 e max.
Use a função eh_primo do exercício anterior sem alterá-la.
*/
#include <stdio.h>
#include <stdbool.h>


bool eh_primo (int n)
{
	bool primo = true;

	for (int i = 2; i < n; i++) 
		if (n%i == 0)
		{
			primo = 0;
			break;
		}

	return ((n > 1) && primo == 1 ? 1 : 0); 
}

void todos_os_primos (int n)
{
	for (int i = 2; i <= n; i++)
		eh_primo(i) ? printf("%d é primo\n",i) : i+0 ;	
}

int main(void)
{
	int n;
	printf("Insira um valor [n]: ");
	scanf("%d",&n);

	todos_os_primos(n);
	return 0;
}

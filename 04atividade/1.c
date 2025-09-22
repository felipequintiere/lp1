/*
 * 1.c
 * Crie uma função eh_primo que recebe um inteiro n e retorna se ele é primo ou não.
 * Exemplos:
 * eh_primo(4) -> 0
 * eh_primo(7) -> 1
 * Dicas:
 *
 * A operação % calcula o resto entre dois valores.
 * 11 % 4 = 3
 * Em C, tipicamente usamos 1 e 0 para representar verdadeiro e falso, respectivamente.
*/
#include <stdio.h>
#include <stdbool.h>

bool eh_primo (int n);

int main(void)
{
	int n;

	printf("Insira um valor [n]: ");
	scanf("%d",&n);

	if (eh_primo(n)) 
		printf("%d é primo\n",n);
	else
		printf("%d não é primo\n",n);

	return eh_primo(n);
}

bool eh_primo (int n)
{
	bool primo = true;

	for (int i = 2; i < n; i++) 
		if (n%i == 0)
		{
			primo = 0;
			break;
		}

	return (n > 1) && (primo == 1) ? 1 : 0; 
}

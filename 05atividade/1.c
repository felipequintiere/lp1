/*
    Leia dois inteiros a e b.
    Exiba os valores de a e b.
    Crie um ponteiro p para a variável com o maior valor.
    Através de p subtraia 50 da variável com o maior valor.
    Exiba os valores de a e b novamente.
*/
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Selecione dois valores inteiros [a b]: ");
	scanf("%d%d", &a, &b);

	if (a > b) 
	{
		int *p = &a;
		*p -= 50; 
		printf("\n[%d %d]\n", a, b);
	}
		
	else if (a < b)
	{
		int *p = &b;
		*p -= 50; 
		printf("\n[%d %d]\n", a, b);
	}

	else 
		printf("\nValores iguais: [%d %d]\n", a, b);

	return 0;
}

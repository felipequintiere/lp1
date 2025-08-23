
// 5.c Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.
#include <stdio.h>

int main(void)
{
	float soma = 0, numero = 1;
	
	while (numero)
	{
		printf("Digite um número: ");
		scanf("%f", &numero);
		soma += numero;
	
	}
	printf("\nO valor da soma é: %f\n", soma);		

	return 0;
}


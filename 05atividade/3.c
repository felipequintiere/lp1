/*
Agora, o casal tem uma lista de compras a efetuar:

int compras[] = { 100, 50, 80, 30, 20 };

Faça um programa que leia o saldo das duas contas e efetue as compras corretamente, sempre usando a conta com o maior saldo. A cada compra, o programa deve exibir os saldos das duas contas.
*/
#include <stdio.h>

void compra(int* conta, int* valor)
{
	*conta -= *valor;
}

int main()
{
	int conta1, conta2;
	int compras[] = { 100, 50, 80, 30, 20 };

	printf("Digite o saldo de ambas as contas: ");
	scanf("%d%d", &conta1, &conta2);

	for (char i = 0; i < 5; i++)
	{
		int valor = compras[i];

		if (conta1 >= conta2)
		{
			compra(&conta1, &valor);
			printf("\nSaldo da primeira conta: R$%d\n", conta1);
			printf("Saldo da segunda conta: R$%d\n", conta2);
		}
		else
		{
			compra(&conta2, &valor);
			printf("\nSaldo da primeira conta: R$%d\n", conta1);
			printf("Saldo da segunda conta: R$%d\n", conta2);
		}
	}

	printf("\nSaldo final da primeira conta: R$%d\n", conta1);
	printf("Saldo final da segunda conta: R$%d\n", conta2);

	return 0;
}

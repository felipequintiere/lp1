/*
Uma conta é representada por um inteiro que guarda o saldo total:

int minha_conta;

Uma compra na internet é efetuada por uma chamada compra(conta,valor). 
A função recebe um ponteiro para uma conta e um valor a ser debitado:

void compra (int* conta, int valor) {
    <...>
}

Um casal tem duas contas e quer usar a conta com maior saldo para fazer 
uma compra de 500 reais. Faça um programa que leia o saldo das duas 
contas e efetue a compra corretamente. Ao final, o programa deve exibir 
os saldos das duas contas.
*/
#include <stdio.h>

void compra(int* conta, int valor)
{
	*conta -= valor;
}

int main() {
	int conta1, conta2;

	printf("Digite o saldo de ambas as contas: ");
	scanf("%d%d", &conta1, &conta2);

	if (conta1 >= conta2)
		compra(&conta1, 500);
	else
		compra(&conta2, 500);

	printf("Saldo final da primeira conta: R$%d\n", conta1);
	printf("Saldo final da segunda conta: R$%d\n", conta2);

    return 0;
}


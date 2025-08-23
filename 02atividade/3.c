
// 3.c Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.
#include <stdio.h>
#define CAMBIO (3.17f)
#define GASTO_LIMITE (1000.0f)

int main(void)
{
	float preco_dolar, preco_real;

	printf("Escreva o preço do celular em dólares ($): ");
	scanf("%f", &preco_dolar);
	preco_real = CAMBIO * preco_dolar;

	if (preco_real <= GASTO_LIMITE)
	{
		printf("BOM NEGÓCIO\n");
	}
	else
	{
		printf("MAU NEGÓCIO\n");
	}
	
	return 0;
}

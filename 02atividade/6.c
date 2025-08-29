// 6.c Faça um programa que leia um número N e calcule o somatório sum(i=1 to N) i^2
#include <stdio.h>

int main(void)
{
	int n, somatorio = 0;

	printf("Digite o limite superior do somatório: ");
	scanf("%d",&n);

	for (int i = 1; i <= n; i++)
		somatorio += i*i;

	printf("%d\n",somatorio);

	return 0;
}

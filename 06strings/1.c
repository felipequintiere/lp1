/*
	Implemente a função tamanho:
		Recebe uma string
		Retorna a quantidades de caracteres da string

	int tamanho (char* str);
	Obviamente, não use a função strlen.
*/
#include <stdio.h>
#define STR_LEN 100

int tamanho(char *str);

int main(void)
{
	char str[STR_LEN+1];

	printf("Insira uma string: ");
	scanf("%s", str);
	printf("\n\'%s\' tem %d caracteres\n", str, tamanho(str));

	return 0;
}

int tamanho(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	return i;
}

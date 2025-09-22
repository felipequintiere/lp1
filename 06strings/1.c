/*
	Implemente a função tamanho:
		Recebe uma string
		Retorna a quantidades de caracteres da string

	int tamanho (char* str);
	Obviamente, não use a função strlen.
*/
#include <stdio.h>
#define STR_LEN 50

int tamanho(char *str);

int main(void)
{
	char str[STR_LEN+1];

	scanf("%s", str);

	printf("%s tem %d caracteres\n", str, tamanho(str));

	return 0;
}

int tamanho(char *str)
{
	int count = 0;	
	while (*str != '\0')
	{
		count++;	
		str++;
	}

	return count;
}

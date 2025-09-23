/*
 * nota: a diferença desse script para o [arquivo da questão original (2.c)](./2.c)
 * é que white-spaces não são ignorados pela função scanf()
*/
#include <stdio.h>
#define STR_LEN 1000

int ler_linha(char *str, int n_max);
int tamanho(char *str);
void concatena (char *o1, char *o2, char *d);

int main(void)
{
	char str1[STR_LEN+1], str2[STR_LEN+1];

	printf("Insira a primeira string: ");
	ler_linha(str1, STR_LEN);
	printf("Insira a segunda string: ");
	ler_linha(str2, STR_LEN);
	printf("\n\'%s\' tem %d caracteres\n"
	"\'%s\' tem %d caracteres\n", str1, tamanho(str1), str2, tamanho(str2));

	char str_destino[tamanho(str1)+tamanho(str2)+1];
	concatena(str1, str2, str_destino);
	printf("%s\n",str_destino);

	return 0;
}

int ler_linha(char *str, int n_max)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n_max)
			str[i++] = (char) ch;

	str[i] = '\0';

	return i;
}

int tamanho(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	return i;
}

void concatena (char *o1, char *o2, char *d)
{
	// obs.: todas as 'characters constants' são representadas
	// internamente por inteiros e, '\0' é representado por 0
	while (*o1) 
		*d++ = *o1++;
	while (*o2) 
		*d++ = *o2++;

	*d = '\0';
}


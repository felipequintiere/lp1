/*
    Implemente a função concatena:
        Recebe uma string de destino
        Recebe duas strings de origem
        Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)

void concatena (char *o1, char *o2, char *d);

A implementação deve usar a função tamanho da questão 3.

Obviamente, não use a função strcat.
*/
#include <stdio.h>
#define STR_LEN 100
#define STR_LEN_D (2*STR_LEN)

int tamanho(char *str);
void concatena (char *o1, char *o2, char *d);

int main(void)
{
	char str1[STR_LEN+1], str2[STR_LEN+1];
	char str_destino[STR_LEN_D+1];

	printf("Insira a primeira string: ");
	scanf("%s", str1);
	printf("Insira a segunda string: ");
	scanf("%s", str2);
	printf("\n\'%s\' tem %d caracteres\n"
	"\'%s\' tem %d caracteres\n", str1, tamanho(str1), str2, tamanho(str2));

	concatena(str1, str2, str_destino);
	printf("%s\n",str_destino);

	return 0;
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


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

	char str_destino[tamanho(str1)+tamanho(str2)+1];
	concatena(str1, str2, str_destino);

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
	int count = 0;	

	while (*str != '\0')
	{
		count++;	
		str++;
	}

	return count;
}

void concatena (char *o1, char *o2, char *d)
{
	int pos = 0;

	for (int i = 0; i < tamanho(o1); i++)
	{
		*(d + pos) = *(o1 + i);	//d[pos] = o1[i];
		pos++;
	}

	for (int i = 0; i < tamanho(o2); i++)
	{
		*(d + pos) = *(o2 + i);	//d[pos] = o2[i];
		pos++;
	}

	printf("%s\n", d);
}


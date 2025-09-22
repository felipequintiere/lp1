/*
    Implemente a função concatena:
        Recebe uma string de destino
        Recebe duas strings de origem
        Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)

void concatena (char* d, char* o1, char* o2);

A implementação deve usar a função tamanho da questão 3.

Obviamente, não use a função strcat.
*/
#include <stdio.h>
#define STR_LEN 100
#define STR_LEN_D (STR_LEN*2)


int tamanho(char *str);
void concatena (char *d, char *o1, char *o2);

int main(void)
{
	char str1[STR_LEN+1];
	char str2[STR_LEN+1];
	char str_destino[STR_LEN_D+1];

	printf("Insira a primeira string: ");
	scanf("%s", str1);
	printf("Insira a segunda string: ");
	scanf("%s", str2);

	concatena(str_destino, str1, str2);

	//printf("\n\nString concatenada:", tamanho());

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

void concatena (char *d, char *o1, char *o2)
{
	int pos = 0;

	int tamanho_d = tamanho(o1) + tamanho(o2);

	for (int i = 0; i < tamanho(o1); i++)
	{
		*(d + pos) = *(o1 + i);
		//d[pos] = o1[i];
		pos++;
	}

	for (int i = 0; i < tamanho(o2); i++)
	{
		*(d + pos) = *(o2 + i);
		//d[pos] = o2[i];
		pos++;
	}

	for (int i = 0; i < pos; i++)
	{
		printf("%c", *(d+i));
	}
	printf("\n");
}


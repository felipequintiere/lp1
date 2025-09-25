/*
Crie uma struct qualquer.
        Seja criativo!
Crie uma função preenche que receba um ponteiro para uma variável da struct criada e 
leia os campos para a variável passada. Exemplo:

struct T t;
preenche(&t);
printf("A=%d, B=%d\n", t.a, t.b);
*/
#include <stdio.h>
#define STR_LEN 100

struct atributos{
	char nome[STR_LEN+1];
	char persona[STR_LEN+1];
	int nivel;
	int hp;
	int sp;
};

void preenche(struct atributos *personagem);
void mostrar(struct atributos *personagem);
int ler_linha(char *str, int n_max);

int main(void)
{
	struct atributos personagem1;
	
	preenche(&personagem1);
	mostrar(&personagem1);

	return 0;
}

void preenche(struct atributos *personagem)
{
	// obs.: personagem->nome já é um vetor de char, 
	// que ao passar para função decai para ponteiro (char *)
	printf("Insira o nome: ");
	ler_linha(personagem->nome, STR_LEN);
	printf("Insira a persona: ");
	ler_linha(personagem->persona, STR_LEN);

	printf("Insira [nível hp sp]: ");
	scanf("%d%d%d", &personagem->nivel, &(*personagem).hp, 
	&(*personagem).sp); 
}

void mostrar(struct atributos *personagem)
{
	printf("\n\n%s\n%s\n%d\n%d\n%d\n", (*personagem).nome,
	(*personagem).persona, (*personagem).nivel, (*personagem).hp,
	(*personagem).sp);
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

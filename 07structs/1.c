/*
Considere a struct a seguir:

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

    Crie um personagem com forca=10, energia=50 e experiencia=30.
    Crie outro personagem com forca=18, energia=20 e experiencia=25.
    Use as duas formas de inicializar structs:
        acessando cada campo individualmente pelo nome
        usando as chaves onde cada campo é separado por vírgula
*/
#include <stdio.h>

// uso de structure tag:
struct Personagem {
	int forca;
	int energia;
	int experiencia;
} personagem1;

// uso de typedef:
typedef struct { int forca;
	int energia;
	int experiencia;
} Persona; 

int main(void)
{
	// uso de structure tag:
	personagem1.forca = 10;
	personagem1.energia = 50;
	personagem1.experiencia = 30;

	struct Personagem personagem2 = {18, 20, 25};
	struct Personagem personagem3 = {.forca=18, .energia=20, .experiencia=25};


	// uso de typedef:
	Persona persona1;

	persona1.forca = 100;
	persona1.energia = 500;
	persona1.experiencia = 300;

	Persona persona2 = {180, 200, 250};
	Persona persona3 = {.forca=180, .energia=200, .experiencia=250};

	return 0;
}

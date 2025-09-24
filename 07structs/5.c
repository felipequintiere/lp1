/*
Um ponto no espaço é representado por uma coordenada x, uma coordenada y e uma coordenada z.

    Crie uma struct para representar um ponto.
    Declare três variáveis para v1, v2 e v3 do tipo criado para representar os pontos (1,0,5), (3,3,3) e (0,10,0).
    Exiba a coordenada y dos três pontos.
    Some 10 unidades na coordenada z dos três pontos.
    Exiba as três coordenadas de v2.
*/
#include <stdio.h>

struct coordenada {
	int x;
	int y;
	int z;
};

void mostrar_coordenada(struct coordenada v);

void main(void)
{
	struct coordenada v1 = {1,0,5};
	struct coordenada v2 = {3,3,3};
	struct coordenada v3 = {0,10,0};
	
	printf("Coordenada y dos três pontos:\n"
	"v1: %d \nv2: %d \nv3: %d\n\n", v1.y, v2.y, v3.y);

	v1.z += 10;
	v2.z += 10;
	v3.z += 10;

	mostrar_coordenada(v1);
	mostrar_coordenada(v2);
	mostrar_coordenada(v3);
}

void mostrar_coordenada(struct coordenada v)
{
	printf("(%d,%d,%d)\n", v.x, v.y, v.z);
}

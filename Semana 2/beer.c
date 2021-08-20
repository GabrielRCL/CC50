#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// PSET 1 - Semana 01
// Feito por: Gabriel R. C. Lucas
// Curso: CC50 (Curso de Ciência da Computação de Harvard)
//
// [Cantando uma musica chata]
// Canta uma musica com o numero de garrafas inseridos

int
main(void)
{
	int garrafas;
	do {
		if (garrafas < 0) {
			printf("Escolha um numero POSITIVO: ");
		} else {
			printf("Escolha o numero de garrafas: ");
		}
		garrafas = GetInt();
	} while (garrafas < 0);
	for (int i = garrafas; i > 0; i--) {
		if (i == 2) {
			printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d garrafa no muro\n", i, i - 1);
		} else if (i == 1) {
			printf("%d garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro\n", i);
		} else {
			printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d garrafas no muro\n", i, i - 1);
		}
	}
return 0;
}
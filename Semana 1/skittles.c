#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PSET 1 - Semana 01
// Feito por: Gabriel R. C. Lucas
// Curso: CC50 (Curso de Ciência da Computação de Harvard)
//
// [Skittles] A maquina de Doces
// o programa primeiro escolhe um número aleatório (pseudo) entre 0 e 1023 e então pede que você (o humano) acerte esse numero.
//

int
main(void)
{
	// seed do PRNG
	srand(time(NULL));
	// cria variavel n
	int n;
	// escolhe número pseudo-aleatório entre [0, 1023]
	int skittles = rand() % 1024;
	//verificando o numero aleatorio do skittles
	//printf("o numero escolhido foi: %d\n", skittles);
	// verifica se o numero escolhido eh igual ao numero do skittles
	do
	{
		if (n >= 1 && skittles > n) {
			printf("HAHAHAHA! eu tenho mais que isso\n");
		} else if (n >= 1 && skittles < n) {
			printf("Eita! eu tenho menos que isso\n");
		}
		printf("Escolha um numero de 1 a 1023: ");
		//input para o usuario colocar o numero
		n = GetInt();
		if (n <= 0) {
			printf("Escolha um numero valido\n");
		}
	}
	while (n != skittles);
	printf("Voce Acertou\n");
return 0;
}
#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// PSET 1 - Semana 01
// Feito por: Gabriel R. C. Lucas
// Curso: CC50 (Curso de Ciência da Computação de Harvard)
//
// [Printa uma tabela ASCII na tela]
//

int
main(void)
{
	for (int i = 65; i < 65 + 80; i++) {
		printf("%c ; %d\n", i, i);
	}
return 0;
}

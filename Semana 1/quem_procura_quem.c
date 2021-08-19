#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PSET 1 - Semana 01
// Feito por: Gabriel R. C. Lucas
// Curso: CC50 (Curso de Ciência da Computação de Harvard)
//
// [Quem Procura Quem]
//	Gera um grafico horinzontal de acordo com os valores inseridos (de acordo com quem está procurando quem)
//

int
main(void)
{
	//M procurando F
    printf("M Procurando F: ");
	int MF = GetInt();

	//F procurando M
    printf("\nF Procurando M: ");
	int FM = GetInt();
	
	//F procurando F
    printf("\nF Procurando F: ");
	int FF = GetInt();
	
	//M procurando M
    printf("\nM Procurando M: ");
	int MM = GetInt();
	
	//SOMA TUDO
	int total = MF + FM + FF + MM;
	
	//CALCULA QUANTAS BARRAS PRA CADA UM
	int qtdMaximaJogoDaVelha = 80;
	int qtdJogoDaVelhaMF = (float)MF/total * qtdMaximaJogoDaVelha;
	int qtdJogoDaVelhaFM = (float)FM/total * qtdMaximaJogoDaVelha;
	int qtdJogoDaVelhaFF = (float)FF/total * qtdMaximaJogoDaVelha;
	int qtdJogoDaVelhaMM = (float)MM/total * qtdMaximaJogoDaVelha;
	
	
	//ESCREVE AS BARRAS
	int i;
	printf("\n\nQuem procura quem?\n\n");
	printf("M Procurando F:\n");
	for (i = 0; i < qtdJogoDaVelhaMF; i++) {
		printf("#");
	}
	printf("\nF procurando M:\n");
	for (i = 0; i < qtdJogoDaVelhaFM; i++) {
		printf("#");
	}
	printf("\nF procurando F:\n");
	for (i = 0; i < qtdJogoDaVelhaFF; i++) {
		printf("#");
	}
	printf("\nM procurando M:\n");
	for (i = 0; i < qtdJogoDaVelhaMM; i++) {
		printf("#");
	}
	printf("\n");
return 0;
}

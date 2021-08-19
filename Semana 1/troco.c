#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PSET 1 - Semana 01
// Feito por: Gabriel R. C. Lucas
// Curso: CC50 (Curso de Ciência da Computação de Harvard)
//
// [Troco] HORA DO TROCO
// o programa conta o numero de moedas necessarias para dar o troco.
//

int
main(void)
{
	//input pro usuario colocar o quanto de troco
	printf("Quanto de troco eu devo?\n");
	float troco = GetFloat();
	
	int vintecincocent = 0;
	int dezcent = 0;
	int cincocents = 0;
	int onecent = 0;
	//contando quantas moedas de 25cents serao necessarias
	while (troco >= 0.24) {
		troco = troco - 0.25;
		vintecincocent++;
	} 
	
	
	//contando quantas moedas de 10cents serao necessarias
	while (troco >= 0.09) {
		troco = troco - 0.1;
		dezcent++;
	} 
	
	//contando quantas moedas de 5cents serao necessarias
	while (troco >= 0.04) {
		troco = troco - 0.05;
		cincocents++;
	} 
	
	
	//contando quantas moedas de 1cents serao necessarias
	while (troco >= 0.009) {
		troco = troco - 0.01;
		onecent++;
	} 
	
	
	//printa quantas moedas de cada uma serão necessarias
	printf("Serao necessarias %.2d moedas de 25centavos\n", vintecincocent);
	printf("Serao necessarias %.2d moedas de 10centavos\n", dezcent);
	printf("Serao necessarias %.2d moedas de  5centavos\n", cincocents);
	printf("Serao necessarias %.2d moedas de  1centavos\n", onecent);
	
return 0;
}

#include <cc50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Cifra de Vigenère
// FORMULA: Ci = ( Pi + Kj ) % 26
// Ci = igésimo caractere criptografado
// P = Frase para criptografar (string inserida)
// Pi = igésimo caractere referente a String

int
main(int argc, char *argv[])	//char * = string
{
	string k = argv[1];	// k é o valor que o humano inserir no argumento (string)
	printf("A CHAVE EH: %s \n", k);

	char A = 'A';	// Int A = 65
	char a = 'a';	// Int a = 97

	printf("Insira o texto para criptografar: \n");
	string p = GetString();

//	 === [Criptografando] ===
	for (int i = 0, j = 0, m = strlen(k), n = strlen(p); i < n; i++)
	{
		if ( (64 < p[i]) &&  (p[i] < 91) ) {
			if ( (64 < k[j]) && (k[j] < 91) ) {
				int Kj = k[j] - ( (int)A );	//transformando para inteiro e subtraindo 64 para deixar o A = 0 / B = 1 / C = 2
				//LETRA MAIUSCULA
				int Pi = p[i] - ( (int)A );	//transformando para inteiro e subtraindo 64 para deixar o A = 0 / B = 1 / C = 2
				int Ci = ( ( Pi + Kj ) % 26 ) + ( (int)A );	//adicionando 64 para voltar aos valores normais de char A = 65 / B = 66 / C = 67
				printf("%c", Ci);
			} else {
				int Kj = k[j] - ( (int)a );	//transformando para inteiro e subtraindo 96 para deixar o A = 0 / B = 1 / C = 2
				//LETRA MAIUSCULA
				int Pi = p[i] - ( (int)A  );	//transformando para inteiro e subtraindo 64 para deixar o A = 0 / B = 1 / C = 2
				int Ci = ( ( Pi + Kj ) % 26 ) + ( (int)A );	//adicionando 64 para voltar aos valores normais de char A = 65 / B = 66 / C = 67
				printf("%c", Ci);
			}
			//INCREMENTA O J
			j++;
			//VERIFICA SE ESTA NO FINAL DA STRING CHAVE
			if (j > m - 1) {
				j = 0;
			}
			
		} else if ( (96 < p[i]) &&  (p[i] < 123) ) {
			if ( (64 < k[j]) && (k[j] < 91) ) {
				int Kj = k[j] - ( (int)A );	//transformando para inteiro e subtraindo 64 para deixar o A = 0 / B = 1 / C = 2
				//LETRA MINUSCULA
				int Pi = p[i] - ( (int)a  );	//transformando para inteiro e subtraindo 96 para deixar o a = 0 / b = 1 / c = 2
				int Ci = ( ( Pi + Kj ) % 26 ) + ( (int)a  );	//adicionando 96 para voltar aos valores normais de char A = 97 / B = 98 / C = 99
				printf("%c", Ci);
			} else {
				int Kj = k[j] - ( (int)a );	//transformando para inteiro e subtraindo 96 para deixar o A = 0 / B = 1 / C = 2
				//LETRA MINUSCULA
				int Pi = p[i] - ( (int)a );	//transformando para inteiro e subtraindo 96 para deixar oa = 0 / b = 1 / c = 2
				int Ci = ( ( Pi + Kj ) % 26 ) + ( (int)a );	//adicionando 96 para voltar aos valores normais de char A = 97 / B = 98 / C = 99
				printf("%c", Ci);
			}
			//INCREMENTA O J
			j++;
			//VERIFICA SE ESTA NO FINAL DA STRING CHAVE
			if (j > m - 1) {
				j = 0;
			}
			
		} else {
			printf("%c", p[i]);
		}
	}
	printf("\n");

return 0;
}
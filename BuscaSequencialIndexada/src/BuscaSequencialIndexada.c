/*
 ============================================================================
 Name        : BuscaSequencial.c
 Author      : Roberto S. Ramos Jr
 Version     : 1.0
 Copyright   : robertosrjr@gmail.com
 Description : Algoritmo de Busca Sequencial Indexada in C, Ansi-style
 	 	 	 :  - O Array tem que estar ordenado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int vec[] = {1, 2, 5, 8, 10, 12, 17, 21, 27, 31};

int main(void) {

	int resp_busca_sequencial = -1;
	int num_a_ser_pesquisado = 17;

	resp_busca_sequencial = buscaSequencialIndexada(vec, num_a_ser_pesquisado, 10);

	if (resp_busca_sequencial == -1) {

		printf("O número %d não foi encontrado.", num_a_ser_pesquisado);
	} else {

		printf("O número %d foi encontrado na posição %d.", num_a_ser_pesquisado, resp_busca_sequencial);
	}


	return EXIT_SUCCESS;
}


int buscaSequencialIndexada(int vec[], int arg, int tam) {

	int i = 0;
	int achou = -1;

	while (( i < tam) && (achou ==-1)) {

		if (vec[i] == arg) {

			return (i);
		}
		i++;
	}
	return (achou);
}

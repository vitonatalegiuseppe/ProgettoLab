/*
 * funzionalita_programmi.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "definizioni.h"
#include "controlli.h"
#include "comunicazione.h"

void ricerca (FILE *file){
	programma_t prog;
	char codice_ric[LUNGHEZZA_CODICE];
	short int trovato = 0;
	unsigned int esito = 0;

	rewind(file);

	do{
		printf("\n\tInserisci il codice da ricercare: ");
		scanf("%6s", codice_ric);
		esito = controlla_codice(codice_ric);
	}while(esito==0);
	fread(&prog, sizeof(programma_t), 1, file);
	while (!feof(file) && !trovato){
		if (strcmp(prog.codice_programma, codice_ric) == 0) {
			trovato = 1;
			stampa_programma(prog);
		}
		fread(&prog, sizeof(programma_t), 1, file);
	}
	if (!trovato) {
		puts ("\n\n Codice non in elenco");
	}
	printf("***************Ricerca Terminata******************\n\n");
}

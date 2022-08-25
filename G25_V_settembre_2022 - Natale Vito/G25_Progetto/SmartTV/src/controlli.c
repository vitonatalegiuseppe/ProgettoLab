/*
 * controlli.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "comunicazione.h"
#include "definizioni.h"
#include "utility.h"

unsigned int controlla_scelta(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr){
	unsigned int controllo = 1;

	while (controllo != 0){
		if (*sceltaPtr < scelta_minima || *sceltaPtr > scelta_massima){
			printf("\tScelta non valida\n");
			effettua_scelta(scelta_minima, scelta_massima, sceltaPtr);
			controllo = 1;
		}else{
			controllo = 0;
		}
	}

	return controllo;
}

int controlla_codice(char codice[]){
	unsigned int controllo = 1;
	unsigned int i = 0;

	if (strlen(codice) != LUNGHEZZA_CODICE-1){
		controllo = 0;
		printf("\tCodice non valido: lunghezza non esatta. Riprova\n");
	}else{
		while(i < LUNGHEZZA_CODICE-1 && controllo != 0){
			if(isdigit(codice[i]) == 0){
				controllo = 0;
				printf("\tCodice non valido: deve contenere solo cifre. Riprova\n");
			}
			i++;
		}
	}

	return controllo;
}

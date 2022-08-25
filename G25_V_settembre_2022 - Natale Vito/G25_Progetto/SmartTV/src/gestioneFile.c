/*
 * gestioneFile.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizioni.h"
#include "controlli.h"
#include "comunicazione.h"
#include "utility.h"

void inserisci_programma(FILE *programmi){
	programma_t prog = {"", "", 0, 0, "", {0, 0}};
	char risp;
	int esito = 0;
	unsigned int scelta = 0;

	do{
		printf("\n\tInserisci i dati del programma: \n");
		do{
			printf("\tCODICE PROGRAMMA (inserisci 6 cifre): \t ");
			scanf("%6s", prog.codice_programma);
			esito = controlla_codice(prog.codice_programma);
		}while(esito==0);

		printf("\tTITOLO PROGRAMMA: \t ");
		svuota_input();
		fgets(prog.titolo, LUNGHEZZA_TITOLO, stdin);
		prog.titolo[strlen(prog.titolo)-1] = '\0';

		// Inserimento tipologia
		printf("\tTIPOLOGIA PROGRAMMA: \t ");
		stampa_tipologie();
		effettua_scelta(1, NUM_TIPOLOGIE, &scelta);
		if (controlla_scelta(1, NUM_TIPOLOGIE, &scelta) == 0){
			prog.tipologia = scelta;
		}

		// Inserimento genere
		printf("\tTIPOLOGIA PROGRAMMA: \t ");
		stampa_generi();
		effettua_scelta(1, NUM_GENERI, &scelta);
		if (controlla_scelta(1, NUM_GENERI, &scelta) == 0){
			prog.genere = scelta;
		}

		printf("\tDESCRIZIONE PROGRAMMA: \t ");
		svuota_input();
		fgets(prog.descrizione, LUNGHEZZA_DESCRIZIONE, stdin);
		prog.descrizione[strlen(prog.descrizione)-1] = '\0';

		printf("\t*********************************************\n");
		printf("%s \t %s \t %u \t %u \t %s \t %d \t %.2f\n", prog.codice_programma, prog.titolo,
				prog.tipologia, prog.genere, prog.descrizione, prog.valutazione.num_valutazioni,
				prog.valutazione.valutazioni);


		fwrite(&prog, sizeof(programma_t), 1, programmi);
		printf("\nVuoi continuare? (s/n)");
		scanf("\n%c", &risp);
	} while ((risp=='s') || (risp=='S'));

	printf("\t***************Inserimento Terminato******************\n\n");
}

void leggi_programmi(FILE *programmi){
	programma_t prog = {"", "", 0, 0, "", {0, 0}};
	rewind(programmi);
	fread(&prog, sizeof(programma_t), 1, programmi);

	while (!feof(programmi)){
		stampa_programma(prog);
		fread(&prog, sizeof(programma_t), 1, programmi);
	}
	printf("\n\t***************File Terminato******************\n\n");
}

void cancella_programma (FILE *programmi) {
	programma_t prog;
	int esito = 0;

	printf("\n\tInserire il codice del programma che vuoi cancellare \t");
	printf("\n\tCODICE --> " );
	scanf("%6s", prog.codice_programma);
	while(!feof(programmi)){
		esito = fread(&prog, sizeof(programma_t), 1, programmi);
		if (esito != 0 )
		{
			puts("\nRecord cancellato");
		}
		else
			puts("\nCodice non trovato!");
	}

}

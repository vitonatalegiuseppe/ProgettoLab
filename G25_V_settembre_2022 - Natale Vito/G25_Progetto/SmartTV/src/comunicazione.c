/*
 * comunicazione.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#include <stdio.h>
#include "definizioni.h"

void effettua_scelta(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr){
	printf("\tQuale scegli? (Inserisci un valore da %d a %d):  \t", scelta_minima, scelta_massima);
	scanf("%d", sceltaPtr);
}

void stampa_menu_principale(){
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	printf("\t1) Gestione programmi tv\n");
	printf("\t2) Gestione utente \n");
	printf("\t3) Ricerca programma \n");
	printf("\t4) Valuta programma \n");
	printf("\t5) Suggerisci programma \n");
	printf("\t6) Riproduci programma \n");
}

void stampa_menu_programmi(){
	printf("\n++++++++++++++++++++++++++++++++++++++++\n");
	printf("\t1) Inserisci programma tv\n");
	printf("\t2) Modifica programma tv \n");
	printf("\t3) Elimina programma tv\n");
	printf("\t4) Leggi programmi tv\n");
}

void stampa_tipologie(){
	printf("\n");
	printf("\t1) Serie\n");
	printf("\t2) Documentari \n");
	printf("\t3) Film\n");
	printf("\t4) Intrattenimento\n");
	printf("\t5) Bambini\n");
	printf("\t6) Informazione\n");
}

void stampa_generi(){
	printf("\n");
	printf("\t1) Fantascienza\n");
	printf("\t2) Cucina \n");
	printf("\t3) Natura\n");
	printf("\t4) Sport\n");
	printf("\t5) Storico\n");
	printf("\t6) Horror\n");
	printf("\t7) Attualita'\n");
	printf("\t8) Comico \n");
	printf("\t9) Drammatico\n");
	printf("\t10) Fantasy\n");
	printf("\t11) Romantico\n");
}

void stampa_programma(programma_t prog){
	printf("\n\tCODICE --> %s\n", prog.codice_programma);
	printf("\tTITOLO --> %s\n", prog.titolo);
	//TODO: creare un metodo che converta la tipologia in testo
	printf("\tTIPOLOGIA --> %d\n", prog.tipologia);
	//TODO: creare un metodo che converta la tipologia in testo
	printf("\tGENERE --> %d\n", prog.genere);
	printf("\tDESCRIZIONE --> %s\n", prog.descrizione);
	printf("\tNUMERO VALUTAZIONI --> %d\n", prog.valutazione.num_valutazioni);
	printf("\tMEDIA VALUTAZIONI --> %.2f\n", prog.valutazione.valutazioni);
}

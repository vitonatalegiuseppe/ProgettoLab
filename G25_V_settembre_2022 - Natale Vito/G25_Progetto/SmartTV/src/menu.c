/*
 * menu.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#include <stdio.h>
#include "comunicazione.h"
#include "controlli.h"
#include "menu.h"
#include "gestioneFile.h"
#include "funzionalita_programmi.h"

#define RISPOSTA_MIN_MENU 1
#define RISPOSTA_MAX_MENU_PRINCIPALE 6
#define RISPOSTA_MAX_MENU_PROGRAMMI 4

void menu_principale(FILE *filePtr){

	unsigned int scelta = 0;

	stampa_menu_principale();
	effettua_scelta(RISPOSTA_MIN_MENU, RISPOSTA_MAX_MENU_PRINCIPALE, &scelta);

	if (controlla_scelta(RISPOSTA_MIN_MENU, RISPOSTA_MAX_MENU_PRINCIPALE, &scelta) == 0){
		switch(scelta){
		case 1:
			menu_programmi(filePtr);
			break;
		case 2:
			printf("OK\n");
			break;
		case 3:
			ricerca(filePtr);
			break;
		case 4:
			printf("OK\n");
			break;
		case 5:
			printf("OK\n");
			break;
		case 6:
			printf("OK\n");
			break;
		}
	}
}

void menu_programmi(FILE *programmiPtr){
	unsigned int scelta = 0;

	stampa_menu_programmi();
	effettua_scelta(RISPOSTA_MIN_MENU, RISPOSTA_MAX_MENU_PROGRAMMI, &scelta);

	if (controlla_scelta(RISPOSTA_MIN_MENU, RISPOSTA_MAX_MENU_PROGRAMMI, &scelta) == 0){
		switch(scelta){
		case 1:
			inserisci_programma(programmiPtr);
			break;
		case 2:
			printf("OK\n");
			break;
		case 3:
			cancella_programma(programmiPtr);
			break;
		case 4:
			leggi_programmi(programmiPtr);
			break;
		}
	}
}

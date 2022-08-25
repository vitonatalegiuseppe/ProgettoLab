/*
 * definizioni.h
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#ifndef DEFINIZIONI_H_
#define DEFINIZIONI_H_

#include <stdio.h>
#include <stdlib.h>

#define NUM_TIPOLOGIE 6
#define NUM_GENERI 11

#define LUNGHEZZA_CODICE 7
#define LUNGHEZZA_NOME 20
#define LUNGHEZZA_COGNOME 20
#define MAX_TIPI_PROGRAMMI 3
#define MAX_GENERE_PROGRAMMI 5

#define LUNGHEZZA_TITOLO 30
#define LUNGHEZZA_TIPOLOGIA 16
#define LUNGHEZZA_GENERE 13
#define LUNGHEZZA_DESCRIZIONE 50

typedef enum {
	SERIE,
	DOCUMENTARI,
	FILM,
	INTRATTENIMENTO,
	BAMBINI,
	INFORMAZIONE
}tipologia_e;

typedef enum{
	FANTASCIENZA,
	CUCINA,
	NATURA,
	SPORT,
	STORICO,
	HORROR,
	ATTUALITA,
	COMICO,
	DRAMMATICO,
	FANTASY,
	ROMANTICO
}genere_e;

typedef struct{
	unsigned int num_valutazioni;
	double valutazioni;
}valutazione_t;

typedef struct{
	char codice_utente[LUNGHEZZA_CODICE];
	char nome[LUNGHEZZA_NOME];
	char cognome[LUNGHEZZA_COGNOME];
	char* tipologie_preferite[MAX_TIPI_PROGRAMMI];
	char* generi_preferiti[MAX_GENERE_PROGRAMMI];
}utente_t;

typedef struct{
	char codice_programma[LUNGHEZZA_CODICE];
	char titolo[LUNGHEZZA_TITOLO];
	unsigned int tipologia;
	unsigned int genere;
	char descrizione[LUNGHEZZA_DESCRIZIONE];
	valutazione_t valutazione;
}programma_t;

#endif /* DEFINIZIONI_H_ */

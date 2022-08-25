/*
 * comunicazione.h
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#include "definizioni.h"

#ifndef COMUNICAZIONE_H_
#define COMUNICAZIONE_H_

void effettua_scelta(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr);
void stampa_menu_principale();
void stampa_menu_programmi();
void stampa_tipologie();
void stampa_generi();
void stampa_programma(programma_t prog);

#endif /* COMUNICAZIONE_H_ */

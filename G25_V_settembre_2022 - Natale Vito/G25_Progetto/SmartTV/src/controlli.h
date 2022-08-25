/*
 * controlli.h
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */

#ifndef CONTROLLI_H_
#define CONTROLLI_H_

unsigned int controlla_scelta(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr);
int controlla_codice(char codice[]);
unsigned int controlla_tipologia(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr);
unsigned int controlla_genere(int scelta_minima, int scelta_massima, unsigned int* sceltaPtr);

#endif /* CONTROLLI_H_ */

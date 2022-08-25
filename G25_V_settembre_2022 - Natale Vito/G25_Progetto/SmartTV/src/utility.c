/*
 * utility.c
 *
 *  Created on: 14 ago 2022
 *      Author: Sensei Tequila
 */
#include <ctype.h>
#include <stdio.h>
#include "definizioni.h"

void converti_in_minuscolo(char *stringa, int lunghezza){
	unsigned int i;

	for (i=0; i<=lunghezza; i++){
		stringa[i] = tolower(stringa[i]);
	}
}

void svuota_input(){
	setvbuf(stdin, NULL, _IONBF, 0);
}

/*TODO: vedere se si riesce a fare una procedura per
		sostituire lo \n della fgets con lo \0 per le stringhe
void converti_stringa(char *stringa){

}*/


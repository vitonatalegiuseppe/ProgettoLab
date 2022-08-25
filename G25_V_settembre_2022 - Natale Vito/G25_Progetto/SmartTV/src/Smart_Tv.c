/*
 ============================================================================
 Name        : Smart_Tv.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "definizioni.h"
#include "menu.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *file_programmi;

	printf("\t\tBENVENUTO NELLA SMART TV\n");
	file_programmi = fopen("Programmi.csv", "ab+");
	if (file_programmi == NULL)
		printf("\n*********** Impossibile aprire il file************* \n\n");
	else{
		menu_principale(file_programmi);
		fclose(file_programmi);
	}

	system("pause");

	return 0;
}

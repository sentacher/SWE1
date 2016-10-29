/*
 ============================================================================
 Name        : Gehalt.c
 Author      : Stefan Entacher
 Version     : 1.0
 Copyright   : 
 Description : Berechnet die Gehaltserhoehung einer Firma
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	//Begruessungstext
	printf("Berechnet die Gehaltserhoehung fuer eine beliebige Eingabe.\n");
	fflush(stdout);
	
	//Variablen setzen
	float gehalt;

	//Einlesen Gehalt
	printf("Bitte Gehalt eingeben: ");
	fflush(stdout);
	scanf("%f", &gehalt);
	fflush(stdin);
	
	if (gehalt>1000)
	{
		gehalt=gehalt*1.0085;
	}
	else
	{
		gehalt=gehalt*1.0209;
	}

	printf("Das Gehalt nach Erhoehung entspricht: %f", gehalt);
	fflush(stdout);
	return 0;
}

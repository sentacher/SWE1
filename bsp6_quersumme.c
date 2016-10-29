/*
 ============================================================================
 Name        : QSumme.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Bildet die Quersumme einer INT Zahl
 ============================================================================
 */

#include <stdio.h>

int quersumme(int z){
	int summe=0;
	while (z>0)
	{
		summe=summe+(z%10);
		z=z/10;
	}
	return summe;
}

int main (void){
	//Variablen definieren
	int zahl=0;
	//Begruessungstext
	printf("Liest eine Zahl ein und gibt die Quersumme aus.\n");
	printf("Bitte Zahle eingeben: ");
	fflush(stdout);
	scanf("%d",&zahl);
	fflush(stdin);
	printf("Die Quersumme der Zahl %d lautet %d",zahl,quersumme(zahl));

	return 0;
}

/*
 ============================================================================
 Name        : i2bin.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Dezimal to Bin
 ============================================================================
 */

/*
 ============================================================================
 Name        : i2bin.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Dezimal to Bin
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int zahl1=0, zahl2=0, rest=0, faktor=1;
	long int ergebnis=0;

	printf("Dieses Proramm liest eine Dezimalzahl ein und gibt die Binaerzahl aus.\n");
	fflush(stdout);
	printf("Bitte geben Sie eine Dezimalzahl ein: ");
	fflush(stdout);
	scanf("%d",&zahl1);
	fflush(stdin);

	zahl2=zahl1;

	while (zahl2!=0){
		rest=zahl2 %2;
		zahl2 = zahl2 /2;

		ergebnis=ergebnis+rest*faktor;
		faktor=faktor*10;
	}
	printf("Die Binärzahl von %d lautet: %ld",zahl1,ergebnis);
	return EXIT_SUCCESS;

}

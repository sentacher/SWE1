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

int main(void) {

	int dec1=0,dec2=0,hex[20],i=0,j=0;

	//Werte einlesen
	printf("Bitte geben Sie eine Dezimalzahl ein: ");
	fflush(stdout);
	scanf("%d",&dec1);
	fflush(stdin);
	dec2=dec1;

	//Dec2Hex
	while(dec2>0){
		hex[i]=dec2%16;
		dec2=dec2/16;
		i++;
	}

	//Ausgabe
	printf("Die Hexadezimalzahl von %d ist: ",dec1);
	for(j=i-1;j>=0;j--){
		if (hex[j]<10){
			//Ausgabe 0-9
			printf("%d",hex[j]);
		}
		else{
			//Ausgabe A-F
			printf("%c",hex[j]+55);
		}
	}
	return EXIT_SUCCESS;
}

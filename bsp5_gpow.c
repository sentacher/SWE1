/*
 ============================================================================
 Name        : Gpow.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Liest zwei Werte ein und berechnet das Quadrat
 ============================================================================
*/

#include <stdio.h>

int main (void){

	//Variablen definieren
	int x=0, n0=0,n=0, ergebnis=0;

	printf("Bitte geben Sie eine Zahl ein: ");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);

	printf("Bitte geben Sie eine Zahl ein, mit der x potenziert werden soll: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);

	ergebnis=x;
	n0=n;
	while(n>1)
	{
		ergebnis=ergebnis*x;
		n--;
	}

	printf("%d hoch %d ist: %d",x,n0,ergebnis);
	return 0;
}

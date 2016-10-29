/*
 ============================================================================
 Name        : GQuadrant.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Liest zwei Koordinaten ein und bestimt den Quadranten
 ============================================================================
 */

#include <stdio.h>

int main (void) {
	//Variablen definieren
	float x_koordinate=0;
	float y_koordinate=0;

	//Begrussungstext
	printf("Liest zwei Koordinaten ein und gibt den Quadranten aus.\n");
	
	printf("Bitte geben Sie die X-Koordinate an: ");
	fflush(stdout);
	scanf("%f",&x_koordinate);
	fflush(stdin);
	printf("Bitte geben Sie die Y-Koordinate an: ");
	fflush(stdout);
	scanf("%f",&y_koordinate);
	fflush(stdin);

	if (x_koordinate>0 && y_koordinate>0) printf("Der Punkt (%g/%g) liegt im 1. Quadranten",x_koordinate,y_koordinate);
	else if (x_koordinate<0 && y_koordinate>0) printf("Der Punkt (%g/%g) liegt im 2. Quadranten",x_koordinate,y_koordinate);
	else if (x_koordinate<0 && y_koordinate<0) printf("Der Punkt (%g/%g) liegt im 3. Quadranten",x_koordinate,y_koordinate);
	else if (x_koordinate>0 && y_koordinate<0) printf("Der Punkt (%g/%g) liegt im 4. Quadranten",x_koordinate,y_koordinate);
	else if (x_koordinate==0 && y_koordinate!=0) printf("Der Punkt (%g/%g) liegt auf der X-Achse",x_koordinate,y_koordinate);
	else if (y_koordinate==0 && y_koordinate !=0) printf("Der Punkt (%g/%g) liegt auf der Y-Achse",x_koordinate,y_koordinate);
	else printf("Der Punkt (%g/%g) ist der Ursprung",x_koordinate,y_koordinate);

	return 0;
}

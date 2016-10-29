/*
 ============================================================================
 Name        : BMICalc.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Berechnet den BMI
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	//Begrussungstext
	printf("Liest Koerpergroesse bzw. Gewicht ein uns berechnet den BMI. \n");
	fflush(stdout);


	//Variablen setzen
	float gewicht=0, groesse=0, bmi=0;
	int geschlecht=0;

	//Einlesen der Variablen
	printf("Bitte geben Sie Ihr Geschlecht an.\n");
	printf("Maennlich --> 1.\n");
	printf("Weiblich  --> 2.\n");
	fflush(stdout);
	scanf("%i",&geschlecht);
	fflush(stdin);

	printf("Geben Sie Ihre Koerprgroesse in m ein: ");
	fflush(stdout);
	scanf("%f",&groesse);
	fflush(stdin);

	printf("Geben Sie Ihre Gewicht in kg ein: ");
	fflush(stdout);
	scanf("%f",&gewicht);
	fflush(stdin);

	//Berechnung BMI
	bmi=gewicht/(groesse*groesse);

	//Kontrollstruktur und formatierte Ausgabe
	if (geschlecht==1)
	{
		if (bmi<20) printf("Untergewicht! Ihr BMI betraegt %f", bmi);
		else if (bmi>=20 && bmi<25) printf("Normalgewicht. Ihr BMI betraegt %f", bmi);
		else if (bmi>=25 && bmi<30) printf("Uebergewicht. Ihr BMI betraegt %f", bmi);
		else if (bmi>=30 && bmi<40) printf("Adipositas! Ihr BMI betraegt %f", bmi);
		else if (bmi<40) printf("Massive Adipositas! Ihr BMI betraegt %f", bmi);
	}

	else if (geschlecht==2)
	{
		if (bmi<19) printf("Untergewicht! Ihr BMI betraegt %f", bmi);
		else if (bmi>=29 && bmi<24) printf("Normalgewicht. Ihr BMI betraegt %f", bmi);
		else if (bmi>=24 && bmi<30) printf("Uebergewicht. Ihr BMI betraegt %f", bmi);
		else if (bmi>=30 && bmi<40) printf("Adipositas! Ihr BMI betraegt %f", bmi);
		else if (bmi<40) printf("Massive Adipositas! Ihr BMI betraegt %f", bmi);
	}

	else printf("Geben Sie ein gueltiges Geschlecht ein");
	return 0;
}

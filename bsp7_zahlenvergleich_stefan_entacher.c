/*
 ============================================================================
 Name        : Zahlenvergleich.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Vergleicht zwei Zahlen und sortiert diese aufsteigend
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	//Variablen setzen
	int zahl1, zahl2, check;

	//Begruessungstext
	printf("Liest zwei Zahlen ein und gibt diese aufsteigend aus.\n");

	//Zahlen einlesen
	printf("Bitte geben Sie zwei Zahlen ein. Bestaetigen Sie jeweils mit Enter:");
	check = scanf("%d %d",&zahl1, &zahl2);

	//Ueberpruefung ob die Eingabe eine Zahl ist
	if (check == 2)
	{
		//Wenn Zahl1 groesser als Zahl2 ist
		if(zahl1 > zahl2)
		{
			//Formatierte Ausgabe Zahl1 und Zahl2
			printf("Sortierung: ");
			printf("%d",zahl1);
			printf(", ");
			printf("%d",zahl2);
		}

		//Wenn Zahl2 groesser als Zahl1 ist
		else
		{
			//Formatierte Ausgabe Zahl2 und Zahl1
			printf("Sortierung: ");
			printf("%d",zahl2);
			printf(", ");
			printf("%d",zahl1);
		}
	}

	//Eingabe ist keine Zahl
	else
	{
		printf("Falsche Eingabe. Bitte geben Sie eine Zahl ein!\n");
	}
	//Programmende
	return 0;
}

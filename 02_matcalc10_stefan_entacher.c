/*
 ============================================================================
 Name        : MatCalc10.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Liest zwei Matrizen einer Textfile ein und berechnet diese mit dem Operator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int matrix1[MAX][MAX] = {0};
int matrix2[MAX][MAX] = {0};
int ergebnis[MAX][MAX] = {0};
int mult=0;

int main (void){

	int z_dim1,s_dim1, z_dim2,s_dim2;
	int z,s,k;
	char op;

	//Einlesen Matrix1
	scanf("<%i> <%i>", &z_dim1, &s_dim1);
	printf("Dim Matrix 1 %i / %i\n", z_dim1, s_dim1);

	for(z=0; z<z_dim1;z++){
		for (s=0;s<s_dim1;s++)
			scanf("%i",&matrix1[z][s]);
	}

	//Ausgabe Matrix1
	for(z=0;z<z_dim1;z++){
			printf("( ");
			for(s=0;s<s_dim1;s++){
				printf("%2i",matrix1[z][s]);
				if (s<s_dim1-1) printf(", ");
			}
			printf(")\n");
		}
	printf("\n");


	//Einlesen Operator
	scanf("\n<%c>",&op);
	printf("%c\n",op);

	scanf("\n<%i> <%i>", &z_dim2, &s_dim2);
	printf("Dim Matrix 2 %i / %i\n", z_dim2, s_dim2);

	for(z=0; z<z_dim2;z++)
		for (s=0;s<s_dim2;s++)
			scanf("%i",&matrix2[z][s]);

	//Ausgabe Matrix2
	for(z=0;z<z_dim2;z++){
			printf("( ");
			for(s=0;s<s_dim2;s++){
				printf("%2i",matrix2[z][s]);
				if (s<s_dim2-1) printf(", ");
			}
			printf(")\n");
		}
	printf("\n");

	//Addieren und Multiplizieren
	if(op=='+'){
		if(z_dim1 == z_dim2 && s_dim1==s_dim2){
			for(z=0;z<z_dim1;z++){
				for(s=0;s<s_dim1;s++){
					ergebnis[z][s]=matrix1[z][s]+matrix2[z][s];
				}
			}
			printf("Das Ergebnis der Addition ist: \n");
			for(z=0;z<z_dim1;z++){
				printf("( ");
				for(s=0;s<s_dim1;s++){
					printf("%2i",ergebnis[z][s]);
					if (s<2) printf(", ");
				}
				printf(")\n");
			}
		}
		else printf("Diese Matrizen koennen nicht addiert werden!");
	}
	else if (op=='*'){
		if (s_dim1 == z_dim2){

			for(s=0; s<z_dim1; s++){
				for(z=0; z<s_dim2; z++){
					for(k=0; k<s_dim1; k++){
						ergebnis[z][s]+=matrix1[z][s]*matrix2[z][s];
					}
				}
			}
			printf("Das Ergebnis der Multiplikation ist: \n");
			for(z=0;z<z_dim1;z++){
				printf("( ");
				for(s=0;s<s_dim2;s++){
					printf("%2i",ergebnis[z][s]);
					if (s<2) printf(", ");
				}
				printf(")\n");
			}
		}
		else printf("Diese Matrizen koennen nicht multipliziert werden!\n");
	}
	else printf("Falscher Operator erkannt!\n");

	return EXIT_SUCCESS;
}

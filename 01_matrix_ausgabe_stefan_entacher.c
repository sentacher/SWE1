/*
 ============================================================================
 Name        : Matrix_Ausgabe.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Gibt eine Matrix aus
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix [3][3]={{1,3,-4},
					   {1,1,-2},
					   {-1,-2,5}};
	int z,s;
	for(z=0;z<3;z++){
		printf("( ");
		for(s=0;s<3;s++){
			printf("%2i",matrix[z][s]);
			if (s<2) printf(", ");
		}
		printf(")\n");
	}
	return EXIT_SUCCESS;
}

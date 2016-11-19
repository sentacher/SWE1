/*
 ============================================================================
 Name        : Pyramide.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : SWE1 Uebung 3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define dim 5

int main(void) {

	int i=0,j=0,k=0;
	int sterne=1;
	int leer=(((dim*2)-1)-1)/2;

	for(i=0;i<dim;i++){
		for(j=0;j<leer;j++){
			printf(" ");
		}
		for(k=0;k<sterne;k++){
			printf("*");
		}
		printf("\n");
		leer=leer-1;
		sterne=sterne+2;
	}
	return EXIT_SUCCESS;
}

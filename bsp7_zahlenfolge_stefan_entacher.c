/*
 ============================================================================
 Name        : zahlenfolge.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Liest Zahlen ein, loescht mehrfache Zahlen und gibt diese sortiert wieder aus
 ============================================================================
 */
#define MAX 10
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i=0,j=0;
	int array[MAX];

	printf("Bitte geben Sie Zahlen ein.\n");
	fflush(stdout);
	for(i=0;i<MAX;i++){
		printf("Bitte geben Sie die %d. Zahl ein: ",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
		fflush(stdin);
	}
	for(i=0;i<MAX-1;i++){
		for(j=j+1;j<MAX-1;j++){
			if (array[i]==array[j]) array[j]=0;
		}
	//qsort(array[]);
	printf("Array in sortierter und bereinigter Reihenfolge: ");
	for(i=0;i<MAX;i++){
		if(array[i]>0){
			printf("%d ",array[i]);
		}
	}
	}
	return EXIT_SUCCESS;
}

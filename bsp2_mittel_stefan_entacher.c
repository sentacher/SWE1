/*
 ============================================================================
 Name        : Arithmetische.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Berechnung des Arithmetischen Mittels
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
	int i=0,sum=0,min=0,count=0;
	double mittel=0;
	int array[MAX];

	for(i=0;i<MAX;i++){
		printf("Bitte geben Sie die %d. Zahl ein: ",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
	}

	for(i=0;i<MAX;i++){
		sum=sum+array[i];
	}

	mittel=(float)sum/MAX;
	printf("Der Mittelwert entspricht: %f\n",mittel);
	min=array[0];
	for(i=1;i<MAX;i++){
		if (array[i]<min) min=array[i];
	}
	printf("Die kleinste Zahl ist %d\n",min);

	for(i=0;i<MAX;i++){
		if(array[i]<mittel) count++;
	}
	printf("%d Zahlen im Array sind kleiner als der Mittelwert.\n",count);


	return EXIT_SUCCESS;
}

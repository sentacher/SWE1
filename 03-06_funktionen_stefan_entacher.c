/*
 ============================================================================
 Name        : swe1_ueb4_funktionen.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Sammlung verschiedener Funktionen fuer Uebungseinheit 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int verdoppeln (int z){
	z=z*2;
	return z;
}

int mystrlen (char src[]){
	int len=0;
	//Stringendezeichen wird nicht beruecksichtigt
	for (len=0;src[len]!='\0';len++){
	}
	return len;
}

void mystrcpy (char dest[], char src[]){
	int i=0;
	for(i=0;src[i]!='\0';i++){
		dest[i]=src[i];
	}
}

void mystrcat (char dest[], char src[]){
	int i=0,start_dest=0;
	start_dest=mystrlen(dest);
	for(i=0;src[i]!='\0';i++){
		dest[start_dest+i]=src[i];
	}
}

int main (void){
	char string[]={"Hallo Welt"};
	char string2[100];
	char string3[100]={"Test"};
	int zahl=2;
	printf("Verdoppeln: %d\n",verdoppeln(zahl));
	printf("Laenge String: %d\n",mystrlen(string));
	mystrcpy(string2,string);
	printf("Kopierter String: %s\n",string2);
	mystrcat(string3,string);
	printf("Angefuegter String: %s\n",string3);
	return EXIT_SUCCESS;
}

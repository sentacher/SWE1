/*
 ============================================================================
 Name        : XChiffText.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Verschlüsselt die Eingabe mit einem definierten String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char key[]="Grossarl";
	int len=sizeof(key)/sizeof(key[0]);
	int i=0;

	int ch;
	while ( (ch=getc(stdin)) != EOF)
		{
			fputc((char)(ch^key[i]), stdout);
			i++;
			if (i-1>len){
				i=0;
			}
		}
	return EXIT_SUCCESS;
}

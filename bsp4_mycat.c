/*
 ============================================================================
 Name        : mycat.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Gibt eine Textfile in der cmd aus (siehe man cat, Unix)
 ============================================================================
 */

#include <stdio.h>

int main (void) {

	int ch;
	int count=1;
	printf("%05d ",count);
	while ( (ch=fgetc(stdin)) != EOF)
	{
		fputc(ch, stdout);
		if(ch=='\n')
		{
			count++;
			printf("%05d ",count);
		}
	}
	return 0;
}

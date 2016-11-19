/*
 ============================================================================
 Name        : i2roman.c
 Author      : Stefan Entacher
 Version     :
 Copyright   : 
 Description : Wandelt eine beliebige Dezimalzahl in eine roemische Zahl um
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//int i_roman[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	//char s_roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int i=0, dez=0,rest=0;

	printf("Wandelt eine Dezimalzahl in eine roemische Zahl um.\n");
	printf("Bitte geben Sie eine Dezimalzahl ein: ");
	fflush(stdout);
	scanf("%d",&dez);
	char s_roman[50]="";
	fflush(stdin);
	rest =dez;

	if(rest>=1000){
		while(rest>=1000){
			s_roman[i]='M';
			i++;
			if (rest<=1000) rest=rest%1000;
			rest=rest-1000;
		}
	}
	if(rest>=900){
		while(rest>=900){
			s_roman[i]='C';
			s_roman[i+1]='M';
			i++;
			if (rest<=900) rest=rest%900;
			rest=rest-900;
		}
	}

	if(rest>=500){
		while(rest>=500){
			s_roman[i]='D';
			i++;
			if (rest<=500) rest=rest%500;
			rest=rest-500;
		}
	}
	if(rest>=400){
		while(rest>=400){
			s_roman[i]='C';
			s_roman[i+1]='D';
			i++;
			if (rest<=400) rest=rest%400;
			rest=rest-400;
		}
	}

	if(rest>=100){
		while(rest>=100){
			s_roman[i]='C';
			i++;
			if (rest<=100) rest=rest%100;
			rest=rest-100;
		}
	}
	if(rest>=90){
		while(rest>=90){
			s_roman[i]='X';
			s_roman[i+1]='C';
			i++;
			if (rest<=90) rest=rest%90;
			rest=rest-90;
		}
	}
	if(rest>=50){
		while(rest>=50){
			s_roman[i]='L';
			i++;
			if (rest<=50) rest=rest%50;
			rest=rest-50;
		}
	}
	if(rest>=40){
		while(rest>=40){
			s_roman[i]='X';
			s_roman[i+1]='L';
			i++;
			if (rest<=40) rest=rest%40;
			rest=rest-40;
		}
	}
	if(rest>=10){
		while(rest>=10){
			s_roman[i]='X';
			i++;
			if (rest<=10) rest=rest%10;
			rest=rest-10;
		}
	}
	if(rest>=9){
		while(rest>=9){
			s_roman[i]='I';
			s_roman[i+1]='X';
			i++;
			if (rest<=9) rest=rest%9;
			rest=rest-9;
		}
	}
	if(rest>=5){
		while(rest>=5){
			rest=rest-5;
			s_roman[i]='V';
			i++;
			if (rest<=5) rest=rest%5;
			rest=rest-5;
		}
	}
	if(rest>=4){
		while(rest>=4){
			rest=rest-4;
			s_roman[i]='I';
			s_roman[i+1]='V';
			i++;
			if (rest<=4) rest=rest%4;
			rest=rest-4;
		}
	}
	if(rest>=1){
		while(rest>=1){
			s_roman[i]='I';
			i++;
			if (rest<=1) rest=rest%1;
			rest=rest-1;
		}
	}
	printf("Die roemische Zahl von %d lautet: %s",dez,s_roman);
	return EXIT_SUCCESS;
}

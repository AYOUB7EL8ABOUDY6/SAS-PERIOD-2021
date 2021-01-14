#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <stdbool.h>
#define false 0 //Constante définition de false = 0
#define true !false //constante true = !false donc true = 1
//typedef int bool;
//#define Pi 3.14;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
		bool isHappy= false;
		// void isHappy;
		if(isHappy==true)
		printf("true");
		else
		printf("false");
		
		fctHello("AYUB");
		printf("\n%d",somme (4,2));
	
	return 0;
} 



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a , b;
	
	printf("entrer un nombre :");
	scanf("%d",&a);
	printf("entrer un nombre :");
	scanf("%d",&b);
	printf("le min est %d :",min(a,b));
	//max(a,b)
	
	return 0;
	}
	int min(int a, int b){
		
		if(a>b){
			printf("%d est superieur a %d \n",a,b);
			
			return b;
		}
		else
		{
			printf("%d est inferieur a %d \n",b,a);
			
			return a;
		}
	}

	


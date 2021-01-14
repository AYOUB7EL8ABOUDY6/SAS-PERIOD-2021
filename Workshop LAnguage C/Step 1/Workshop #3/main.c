#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//declarationc
	
	const  float Pi = 3.14 ;
	float r, d, p, s ;
	
	//entre
	
	printf("Entre la valeur du rayon r\n");
	scanf("%f" ,&r);
	if(r!=0){
	
	//traitement 
	
	p=2*Pi*r;
	d=p/Pi;
	s=Pi*r*r;
	
	//affichage
	
	printf("Un cercle de rayon %.2f\n, a pour le diametre %.2f\n, pour le perimetre %.2f\n et pour la surface %.2f\n" ,r,p,d,s);
	}
	else
	{
	printf("error");
	}
	
	return 0;
}

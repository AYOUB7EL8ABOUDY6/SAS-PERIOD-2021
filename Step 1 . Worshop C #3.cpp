#include <stdio.h>
//#include <stdlip.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float Rayon , Diametre , Perimetre , Surface ;
	const float Pi = 3.14 ;
	printf("Veuillez entrer la valeur du rayon de cercle \n");
	scanf("%f" , &Rayon);
	Diametre = 2 * Rayon ;
	Perimetre = 2 * Pi * Rayon ;
	Surface = Rayon * Rayon * Pi ;
	printf("Le diametre de cercle est : %.2f \n " , Diametre );
	printf("Le Perimetre de cercle est : %.2f \n " , Perimetre );
	printf("La Surface de cercle est : %.2f \n " , Surface );
	
	return 0;
}

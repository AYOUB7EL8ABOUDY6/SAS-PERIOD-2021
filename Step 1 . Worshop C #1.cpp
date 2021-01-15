#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    char Nom[20] ,Prenom[20], Sex[20] ;
	long Tel ;
	int Age ;
	
	printf("Taper votre Nom :\n");
	scanf("%s" ,&Nom);
	printf("Taper votre Prenom :\n");
	scanf("%s" ,&Prenom);
	printf("Taper votre Sex :\n");
    scanf("%s" ,&Sex);
	printf("Taper votre Tel :\n");
	scanf("%s" ,&Tel);
	printf("Taper votre Age :\n");
	scanf("%d" ,&Age);
	
	printf("Hello, %s %s\n %s\n %s\n %d\n" ,Nom ,Prenom ,Sex ,Tel ,Age);
	
	return 0;
}

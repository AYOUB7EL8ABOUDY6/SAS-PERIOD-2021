#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char Nom[20] ,Prenom[20] ,Sex[1] ,Tel[20];
	int Age ;
	
	printf("saisir votre Nom\n");
	scanf("%s", &Nom);
	printf("saisir votre Prenom\n");
	scanf("%s", &Prenom);
	printf("saisir votre Sex\n");
	scanf("%s", &Sex);
	printf("saisir votre Tel\n");
	scanf("%s", &Tel);
	printf("saisir votre Age\n");
	scanf("%d", &Age);
	
	printf("Bonjour %s %s\n %s\n %s\n %d\n" , Nom , Prenom , Sex , Tel , Age);
	
	return 0;
}

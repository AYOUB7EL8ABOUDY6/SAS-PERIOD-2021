#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b ; 
    long result; 
    printf("la valeur de a\n");
    scanf("%d",&a);
    printf("la valeur de b\n");
    scanf("%d" ,&b);
    // addition
    result = a+b ;
    printf("la somme est %ld :\n",result);
    result = a-b ;
    printf("la soustraction est %ld :\n",result);
    result = a/b ;
    printf("la division est %ld :\n",result);
    result = a*b ;
    printf("la multiplication est %ld :\n",result);
    result = a%b ;
    printf("le modulo est %ld :\n",result);
    
	
    return 0;
}

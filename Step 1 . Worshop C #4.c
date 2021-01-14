#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int e,count=0,total=0;

    do{
    printf("Entrez un entier positif: \n");
    scanf("%d",&e);
    if(e > -1){
    count++;
    total += e;
    }
    }while(e!=-1);


    printf("La moyenne de ces %.2d entiers %.2f\n",count,(float)total/count);
    
	return 0;
}

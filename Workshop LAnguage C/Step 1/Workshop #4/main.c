#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,count,total=0;
	
	do{
		printf("entrer les entiers positifs\n");
		scanf("%d" , &i);
		
		if(i>-1){
			count++;
			total+=i; //total= total+i
		}
	}
	while(i>-1);
		printf("la moyenne des %d entiers positifs est %.2f",count,(float)total/count);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j;
	printf("contagem de ciclos");
	for(i=1; i < 5; i++){
		printf("\n ciclo %d", i);
		for(j=1; j < 3; j++)
			printf("\n J = %d", j);
			
		printf("\n");
	}
	
	
	return 0;
}

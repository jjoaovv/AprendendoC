#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j, x, y;
	printf("contagem de ciclos\n");
	printf("-------------------\n");
	
	printf("Digite quantidade de ciclos: ");
	scanf("%d", &x);
	printf("Digite a quantide loop dos ciclos: ");
	scanf("%d", &y);
	
	for(i=1; i <= x; i++){
		printf("\n ciclo %d", i);
		
		for(j=1; j <= y; j++)
			printf("\n J = %d", j);
			
		printf("\n");
	}
	
	
	return 0;
}

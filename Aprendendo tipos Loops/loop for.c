#include <stdio.h>
#include <stdlib.h>

/* 
	Explicação de como funciona o programa:
	O usuário escolherá as opções crescente e decrescente para os ciclos e loops, depois ele digitará
a quantidade de ciclos e a quantidade de loops. Então será mostrado, os ciclos e os loops escolhidos por ele.

	Explicação para que sereve cada variável:
- {I} e {J} = estão sendo usadas para os ciclos{I} e loops{J} do for .
- {X} e {Y} = estão sendo usadas para armazenar o valor dos ciclos{X} e loops{Y} digitado pelo usuário.
- {V} = esta sendo usado para a função "switch".

 */

int main() {
	int i, j, x, y,v;
	printf("contagem de ciclos\n");
	printf("-------------------\n");
	printf("[1] Crescente:\n");
	printf("[2] Decrescente:\n");
	printf("escolha se a oredem sera {1}crescente ou {2}decrescente: ");
	scanf("%d", &v);

	switch(v){
	
	case 1:
		system("cls");
		printf("-------------------\n");
		printf(" CICLOS CRESCENTE: \n");
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
	break;
	
	case 2:
		system("cls");
		printf("-------------------\n");
		printf(" CICLOS DECRESCENTE: \n");
		printf("-------------------\n");
		
		printf("Digite quantidade de ciclos: ");
		scanf("%d", &i);
		printf("Digite a quantide de loops: ");
		scanf("%d", &y);

		for(; i >= x; i--){
			printf("\n ciclo %d", i);
			j=y;
			for(; j >= 0; j--)
				printf("\n J = %d", j);
		
			printf("\n ");
		}
	break;
}
	return 0;
}

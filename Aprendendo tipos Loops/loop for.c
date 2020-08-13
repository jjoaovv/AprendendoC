#include <stdio.h>
#include <stdlib.h>

/* 
	Explica��o de como funciona o programa:
	O usu�rio escolher� as op��es crescente e decrescente para os ciclos e loops, depois ele digitar�
a quantidade de ciclos e a quantidade de loops. Ent�o ser� mostrado, os ciclos e os loops escolhidos por ele.

	Explica��o para que sereve cada vari�vel:
- {I} e {J} = est�o sendo usadas para os ciclos{I} e loops{J} do for .
- {X} e {Y} = est�o sendo usadas para armazenar o valor dos ciclos{X} e loops{Y} digitado pelo usu�rio.
- {V} = esta sendo usado para a fun��o "switch".

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

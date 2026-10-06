#include <stdio.h>
#include <stdlib.h>

/* programa que le 10 valores do teclado e mostra na tela o maior entre
os 5 primeios e o menor entre os 5 restantes*/

int comp_maior(int a, int b){
	if (a>b) return a;
	else return b;
}
int main(int argc, char *argv[]){
	int valor[10];
	int i;
	
	
    printf("Leia os numeros\n");
    // PARA (INICIAL, CONDIÇÃO, INCREMENTO
   for(i=0; i<10; i++) {
    scanf("%d",&valor[i]);
}
   for(i=9; i>=0; i--){
   	 printf("|%d|", valor[i]);
   }
   
	return 0;
}

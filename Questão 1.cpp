/*Escreva um programa que declare um array de inteiros com 5 elementos 
e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usu�rio 
e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int vetor[5];
	int *pvetor;
	
	pvetor = vetor; // acessar o valor na posi�a� zero do vetor.
	
	printf("Digite os valores: "); 
	printf("\n\n");
	
	for(int i=0; i<5; i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("\n\n");
	
	for(int i=0; i<5; i++){
		printf("O valor �: %d\n", *pvetor + i);
		printf("O endere�o �: %d\n", pvetor + i);
		
	}
	
	return 0;
}

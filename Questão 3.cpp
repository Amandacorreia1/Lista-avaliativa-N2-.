/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis.
 Em seguida, preencha as vari�veis com valores informados pelo usu�rio. 
 Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria
  e sem utilizar operadores de atribui��o direta. Em seguida, imprima os valores atualizados das duas vari�veis.*/
  
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, b;
	int *pa, *pb;
	
	printf("Digite um valor para A : ");
	scanf("%d", &a);
	
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	
	pa = &a;
	pb = &b;
	
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
	
	printf("\n\n");
	printf("O valor de A �: %d\n", a);
	printf("O valor de B �: %d\n", b);
	
	
	return 0;
}
  
  
  


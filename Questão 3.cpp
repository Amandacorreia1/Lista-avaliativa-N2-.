/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis.
 Em seguida, preencha as variáveis com valores informados pelo usuário. 
 Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária
  e sem utilizar operadores de atribuição direta. Em seguida, imprima os valores atualizados das duas variáveis.*/
  
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
	printf("O valor de A é: %d\n", a);
	printf("O valor de B é: %d\n", b);
	
	
	return 0;
}
  
  
  



/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n.
 Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com 
 valores inteiros informados pelo usuário. Em seguida, crie um ponteiro que aponte para
  o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro,
   imprimindo na tela os valores dos elementos do vetor em ordem inversa.*/  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	int *ponteiro;
	
	printf("Informe um numero inteiro que representará o tamanho do seu vetor: ");
	scanf("%d", &n);
	
	int v[n];
	
	printf("Digite os valores para preencher o vetor: ");
	
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	ponteiro = v;   // acessar o valor na primeiera posiçao do vetor, posicao zero.
	
	for(int k=n-1; k>=0; k--){ // decremento.
		printf("Os valores em ordem inversa é: %d\n", *(ponteiro + k));
	}
	
	return 0;
}

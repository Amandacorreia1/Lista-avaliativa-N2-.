/*Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e 
utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x, dobro;
	float *px;
	
	printf("Informe um número: ");
	scanf("%f", &x);
	
	px = &x;
	dobro = 2 * *px;
	
	printf("O Valor original é: %.2f\n", *px);
	printf("O dobro calculado é: %.2f",dobro);
	
	
	return 0;
}

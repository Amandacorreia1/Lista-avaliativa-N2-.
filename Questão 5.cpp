/*Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. 
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e 
utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x, dobro;
	float *px;
	
	printf("Informe um n�mero: ");
	scanf("%f", &x);
	
	px = &x;
	dobro = 2 * *px;
	
	printf("O Valor original �: %.2f\n", *px);
	printf("O dobro calculado �: %.2f",dobro);
	
	
	return 0;
}

/*Escreva um programa que solicite ao usuário que digite uma string e, em seguida,
 crie uma nova string que seja a cópia da string original, mas com todas as vogais removidas.
  O programa deve usar ponteiros para manipular as strings.*/
  
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char palavra[50];
	char palavra_sem_vogal[50];
	char *p = palavra;
	int i = 0;

	printf("Informe a palavra: ");
    gets(palavra);
    
    printf("\n");
    
    strcpy(palavra, strlwr(palavra));
    
	for(int idx=0; idx<strlen(palavra); idx++){
		if(!(palavra[idx] == 'a' || palavra[idx] == 'e' || palavra[idx] == 'i' || palavra[idx] == 'o' || palavra[idx] == 'u')){ 
			palavra_sem_vogal[i] = *(p+idx);
			i++;
		}
	
	}
	printf("Palavra digitada sem vogal:  ");
	printf("%s %d", palavra_sem_vogal, strlen(palavra_sem_vogal));
	return 0;
}

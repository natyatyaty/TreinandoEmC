//Escreva um programa que peça para o usuário digitar notas de alunos (de 0 a 10). 
// O programa deve continuar pedindo notas até que o usuário digite um número negativo (ex: -1). 
// No final, mostre a média das notas digitadas.

#include <stdio.h>

int main(){
	float nota  = 0;
	float somaMedia = 0;
	int i = 0;
	
	do{
		printf("Insira a nota do aluno:\n");
		scanf("%f", &nota);

		if(nota>=0){
		somaMedia = somaMedia + nota;
		++i;
		}
	}while(nota>=0);
		float media = somaMedia / i;
		printf("A média das notas é: %.2f\n", media);
		
	return 0;
}
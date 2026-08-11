//Crie uma variável global logCount. Crie uma função que, cada vez que chamada, incremente essa variável.
// No main, use um switch case para que o usuário escolha entre: 1- Chamar a função, 2- Ver o total de logs, 3- Sair.
#include <stdio.h>
int logCount = 0;

void increment(){
	++logCount;
}

int main(){

	int escolha = 0;
	
	printf("\n==Escolha uma opção do menu==\n 1- Chamar a função\n 2- Ver o total de logs\n 3- Sair\n=============================\n");
	scanf("%d", &escolha );
	
	switch(escolha){
		case 1: increment();
			break;
		case 2: printf("Total de logins:%d", logCount);
			break;
		case 3: printf("Saindo...");
			break;
		default: printf("Opção inválida");
	}
	
	return 0;
}
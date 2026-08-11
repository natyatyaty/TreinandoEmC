/*O Conversor de Status:

1. Use `typedef` para criar um tipo chamado `Status` (baseado em `int`).
2. No `main`, peça para o usuário digitar um número (0 ou 1).
3. Atribua esse valor a uma variável do tipo `Status`.
4. Use um **switch case** para essa variável:
    - Se for `0`: Imprima "Sistema Offline".
    - Se for `1`: Imprima "Sistema Online".
    - `default`: Imprima "Erro: Status desconhecido".*/

#include <stdio.h>
typedef int status;

int main(){	

	status statusDigitado = 0;
	
	printf("Digite um valor\n 1->Sistema Online\n 0->Sistema Offline\n");
	scanf("%d", &statusDigitado);
	
	switch(statusDigitado){
		case 1: printf("Sistema Online");
			break;
		case 0: printf("Sistema Offline");
			break;
		default: printf("Número inválido");
	}
	
	return 0;
}
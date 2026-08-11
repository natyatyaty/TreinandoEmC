/*Conversão Implícita vs Explícita

Crie uma função que receba um float, mas dentro dela, converta esse valor para int usando type casting e retorne o dobro desse inteiro. 
Teste com o valor 4.9.*/

#include <stdio.h>
void typecasting(float valor){
	int novoValor = (int)valor;
	int dobro = novoValor*2;
	
	printf("O dobro do valor inicial (convertido em inteiro) é: %d\n", dobro);
}
int main(){
	typecasting(4.9);
	return 0;
}
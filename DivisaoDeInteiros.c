//Usando typedef para renomear int para Unidade, declare duas variáveis (a = 7, b = 2).
// Calcule a divisão entre elas e exiba o resultado real (3.5) usando type casting.

#include <stdio.h>
typedef int unidade;

void mudanca(unidade a, unidade b){
	double resultado = (double)a /(double)b;
	printf("Resultado:%.1f", resultado);
}

int main(){
	mudanca(7,2);
	 return 0;
 }
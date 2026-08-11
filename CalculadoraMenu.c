/*Crie um programa que exiba um menu com as opções:
1. Somar
2. Subtrair
3. Sair
O programa deve ler a opção do usuário, executar a ação e **mostrar o menu novamente**, a menos que ele escolha a opção "3. Sair".*/

#include <stdio.h>
	void somar(){
		float ns1 = 0;
		float ns2 = 0;
		
		printf("Digite o primeiro número da soma:\n");
		scanf("%f", &ns1);
		printf("Digite o primeiro número da soma:\n");
		scanf("%f", &ns2);
		
		float soma = ns1 + ns2;
		printf("%.2f + %.2f = %.2f", ns1, ns2, soma);
	}
	
	void subtrair(){
		float nm1 = 0;
		float nm2 = 0;
		
		printf("Digite o primeiro número da subtração:\n");
		scanf("%f", &nm1);
		printf("Digite o primeiro número da subtração:\n");
		scanf("%f", &nm2);
		
		float subtracao = 0;
		if(nm1>nm2){
			subtracao = nm1 - nm2;
			printf("%.2f - %.2f = %.2f", nm1, nm2, subtracao);
		}
		else{
			subtracao = nm2 - nm1;
			printf("%.2f - %.2f = %.2f", nm2, nm1, subtracao);
		}
		
	}
	
	
int main(){
	int resposta = 0;
	do{
			printf("\tMENU\n");
			printf(" 1. SOMA\n 2. SUBTRAÇÃO\n 3.SAIR\n");
			scanf("%d", &resposta);
			
			if (resposta == 1){
				somar();
			}else if(resposta == 2){
				subtrair();
			}else
				break;
		}
	while(resposta<3 && resposta>0);
	
	return 0;
}
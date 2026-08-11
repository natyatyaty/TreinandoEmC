//Crie um programa que use uma constante para o limite de temperatura (30.0).
//Leia a temperatura atual e armazene o estado (acima do limite ou não) em uma variável booleana.
//Use uma condicional para exibir o status.
#include <stdio.h>

#define LIMITE_ALTO 30.0

int main(){
    float temperaturaAtual = 0.0;
    int estaquente = 0;

    printf("Digite a temperatura atual:\n");
    scanf("%f", &temperaturaAtual);
    
    estaquente=(LIMITE_ALTO<temperaturaAtual);    
        
    if(estaquente==1){
        printf("Está quente!");
    }else{
        printf("A temperatura está normal!");
    }
    
    return 0;
}
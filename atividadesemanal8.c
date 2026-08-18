/*Escreva uma funcao chamada contagem1 que recebe como parametro um ponteiro para um arranjo de inteiros chamado valores, 
um inteiro chamado n contendo o n´umero de elementos do arranjo e um inteiro chamado x e retorna o
n´umero de vezes que o valor x aparece dentro do arranjo apontado por valores.*/

#include <stdio.h>
# include <stdlib.h>
int main() {

    int contagem1(int x ,int n){

        int* valores = (int*) malloc(sizeof(int)*n);

        for(int i=0; i<n ; i++){
            for(int z = 0; z<n; z++){
                valores[z]= z;
            }
        }

        int cont = 0;

        for(int w=0; w<n; w++){
            if(valores[w]==x)
                cont++;
        }
        printf("%d\n", cont);
    }

    contagem1(0,4);

    return 0;
}
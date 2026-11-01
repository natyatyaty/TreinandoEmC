/*Crie um programa que gerencie o cadastro de um produto de supermercado.

Defina uma struct chamada Produto com os seguintes campos:

nome (string / vetor de char)

codigo (int)

preco (float)

quantidade_estoque (int)

Peça para o usuário digitar os dados do produto

Imprima na tela um resumo dos dados cadastrados e mostre também o valor total em estoque (preço*quantidade).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int codigo;
    float preco;
    int quantidade_estoque;
}Produto;

int main(){

    Produto produto1;

    printf("Digite o nome do produto: \n");
    scanf("%s", produto1.nome);

    printf("Digite o codigo do produto: \n");
    scanf("%d", &produto1.codigo);

    printf("Digite o preço do produto: \n");
    scanf("%f", &produto1.preco);

    printf("Digite a quantidade em estoque do produto: \n");
    scanf("%d", &produto1.quantidade_estoque);

    printf("====RESUMO DO PRODUTO CADASTRADO====\n");
    printf("Nome: %s\n", produto1.nome);
    printf("Código: %d\n", produto1.codigo);
    printf("Preço: R$ %.2f\n", produto1.preco);
    printf("Quantidade em estoque: %d\n", produto1.quantidade_estoque);
    printf("====================================\n");
    printf("Valor total em estoque: R$ %.2f\n", produto1.quantidade_estoque * produto1.preco);

    return 0;
}
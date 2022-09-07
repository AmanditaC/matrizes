//Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões
//da matriz deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e
//retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário.

#include <stdio.h>//Bibliotecas
#include <stdlib.h>

int main(){//Função principal

    int *mat, linha, coluna, i, j;//Declaração das variáveis

    printf("Informe o numero de linhas: \n");//Pedindo o número de linhas
    scanf("%d", &linha);//Lendo e armazenando
    printf("Informe o numero de colunas: \n");//Pedindo o número de colunas
    scanf("%d", &coluna);//Lendo e armazenando

    system("cls");//Apagando as informações anteriores

    mat = (int *) malloc (linha*coluna*sizeof(int));//Abrindo espaço na memória

    for(i=0; i<linha; i++){//Laço para preencher a matriz
        for(j=0; j<coluna; j++){
            printf("Elemento [%d] [%d]: ", i, j);
            scanf("%d", &mat);
        }
    }

    system("cls");//Apagando as informações anteriores

    retorna(&mat, linha, coluna);//Chamando a função secundaria

    free(mat);//Liberando a memória

    return 0;
}

int retorna(int *mat, int linha, int coluna){//Função secundaria

    int n, i, j;//Declaração das variáveis

    printf("Informe um numero: ");//Pedindo um número para ser comparado a matriz
    scanf("%d", &n);//Lendo e armazenando

    system("cls");//Apagando as informações anteriores

    for(i=0; i<linha; i++){//Laço para comparar se o valor digitado há dentro da matriz
        for(j=0; j<coluna; j++){
            if(mat == n){
                return printf("1");
            }
            else{
                return printf("0");
            }
        }
    }
}
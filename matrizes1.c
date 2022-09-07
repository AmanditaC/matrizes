//Questão 1) Considere a manipulação de matrizes quadradas de inteiros e a representação de
//matrizes em C por vetor simples e vetor de ponteiros. 

#include <stdio.h>//Bibliotecas
#include <stdlib.h>

void soma(int mat1, int mat2, int mat3, int linhas, int colunas);//Protótipo das funções que serão feitas

void subtracao(int mat1, int mat2, int mat3, int linhas, int colunas);

void multiplicacao(int mat1, int mat2, int mat3, int linhas, int colunas);

//e) escreva uma função main para testar as funções dos itens anteriores.

int main(){//Função principal
    
    int mat1, mat2, mat3;//Declarando as variáveis
    int *m1, *m2, *m3;
    int linhas, colunas, i, j;

    printf("Informe quantas linhas sera:\n");//Pedindo o número de linhas
    scanf("%d", &linhas);//Lendo e armazenando
    printf("Informe quantas colunas sera:\n");//Pedindo o número de colunas
    scanf("%d", &colunas);//Lendo e armazenando

    system("cls");//Apagando as informações anteriores

    m1 = (int *) malloc(linhas*colunas*sizeof(int));//abrindo espaço na memória para as matrizes
    m2 = (int *) malloc(linhas*colunas*sizeof(int));
    m3 = (int *) malloc(linhas*colunas*sizeof(int));

    for(i=0; i<linhas; i++){//Laço par preencher a matriz 1
        for(j=0; j<colunas; j++){
            printf("Matriz 1 [%d] [%d]: ", i, j);
            scanf("%d", &mat1);
        }
    } 

    for(i=0; i<linhas; i++){//Laço para preencher a matriz 2
        for(j=0; j<colunas; j++){
            printf("Matriz 2 [%d] [%d]: ", i, j);
            scanf("%d", &mat2);
        }
    }

    soma(mat1, mat2, mat3, linhas, colunas);//Chamando a função secundária
    subtracao(mat1, mat2, mat3, linhas, colunas);//Chamando a terceira função
    multiplicacao(mat1, mat2, mat3, linhas, colunas);//Chamando a quarta função

    free(m1);//Liberando a memória 
    free(m2);
    free(m3);

    return 0;
}

//a) implemente duas versões (usando vetor simples e vetor de ponteiros) de uma função que
//recebe duas matrizes como parâmetro e retorna a matriz resultante da soma.

void soma(int mat1, int mat2, int mat3, int linhas, int colunas){//Função secundária

    int i, j;//Declarando variáveis

    for(i=0; i<linhas; i++){//Laço para fazer a soma das matrizes
        for(j=0; j<colunas; j++){
            mat3 = mat1 + mat3;//Mat3 recebendo a soma de mat1 e mat2
        }
    }
    printf("SOMA = %d:\n", mat3);//Mostrando o resultado da soma
}

//b) implemente duas versões (usando vetor simples e vetor de ponteiros) de uma função que
//recebe duas matrizes como parâmetro e retorna a matriz resultante da subtração.

void subtracao(int mat1, int mat2, int mat3, int linhas, int colunas){//Teceira função 

    int i, j;//Declarando variáveis

    for(i=0; i<linhas; i++){//Laço para fazer a subtração das matrizes
        for(j=0; j<colunas; j++){
            mat3 = mat1 - mat3;//Mat3 recebendo a subtração de mat1 e mat2               
         }
    }
    printf("SUBTRACAO = %d:\n", mat3);//Mostrando o resultado da subtração
}

//c) implemente duas versões (usando vetor simples e vetor de ponteiros) de uma função que
//recebe duas matrizes como parâmetro e retorna a matriz resultante da multiplicação.

void multiplicacao(int mat1, int mat2, int mat3, int linhas, int colunas){//Quarta função 

    int i, j;//Declarando variáveis

    for(i=0; i<linhas; i++){//Laço para fazer a multiplicação das matrizes
        for(j=0; j<colunas; j++){
            mat3 = mat1 * mat3;//Mat3 recebendo a multiplicação de mat1 e mat2
        }
    }
    printf("SUBTRACAO = %d\n", mat3);//Mostrando o resultado da multiplicação
}
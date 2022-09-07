#include <stdio.h>//Bibliotecas
#include <stdlib.h>

int main(){//Função principal

    int *mat[3][3], i, j;//Declarando variáveis

    int *mat = (int *) malloc (3*3*sizeof(int));

    for(i=0; i<3; i++){//Laço para preencher a matriz
        for(j=0; j<3; j++){
            printf("Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    int somaDiagPrin = 0;//Declarando a variável para soma da diagonal principal

    for(i=0; i<3; i++){//Laço para a soma da diagonal principal
        somaDiagPrin = somaDiagPrin + mat[i][i];//Somatório da diagonal principal
    }

    int somaDiagSec = 0;//Declarando a variável para soma da diagonal secundária

    for(i=0; i<3; i++){//Laço para a soma da diagonal secundária
        somaDiagSec = somaDiagSec + mat[i][3-i-1];//Somatório da diagonal secundária
    }

    int matLinha = 0;//Declarando variável para somatorio das linhas

    for(i=0; i<3; i++){//Laço para soma das linhas
        for(j=0; j<3; j++){
            matLinha = matLinha + mat[i][j];
        }
    }

    int matColuna = 0;//Declarando variável para soma das colunas

    for(j=0; j<3; j++){//Laço para soma das colunas
        for(i=0; i<3; i++){
            matColuna = matColuna + mat[i][j];
        }
    }

    int matLinha = 1, matColuna = 1;

    if(matLinha && matColuna && somaDiagPrin == somaDiagSec && somaDiagPrin == matLinha){//verificando se realmente é um quadrado mágico
        printf("Quadrado Magico\n");
    }
    else{
        printf("Quadrado NAO Magico\n");
    }

    free(mat);//Liberando a memória da matriz

    return 0;
}
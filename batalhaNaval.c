#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Criação das variáveis de linhas e colunas da matriz
    char linha[10] = { 'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {{0}};

    // Exibição do título do tabuleiro e espaço inicial
    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" ");

    // Barco na vertical
    for (int i = 3, j = 3; j <= 5; j++){
        tabuleiro[i][j] = 3;
    }

    // Barco na horizontal
    for (int i = 6, j = 7; i <= 8; i++){
        tabuleiro[i][j] = 3;
    }

    // Exibição dos valores da matriz 
    for (int i = 0; i < 10; i++){
        printf(" %c",linha[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%d", i+1);
    for(int j = 0; j < 10; j++){
        printf(" %d",tabuleiro[i][j]);
        }
        //Pula a linha quando termina de percorrer todos os valores de j(coluna)
        printf("\n");
    }
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

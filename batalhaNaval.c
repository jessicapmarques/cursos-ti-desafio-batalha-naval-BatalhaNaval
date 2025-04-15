

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


    #include <stdio.h>

int main() {
    
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

    int tabuleiro[10][10] = { 
        {0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int navio_1[3] = {3,3,3};
    int navio_2[3] = {3,3,3};

    tabuleiro[4][2] = navio_1[0];
    tabuleiro[4][3] = navio_1[1];
    tabuleiro[4][1] = navio_1[2];

    tabuleiro[6][3] = navio_2[0];
    tabuleiro[7][3] = navio_2[1];
    tabuleiro[8][3] = navio_2[2];

    

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf("%c ", letras[i]); 
    }

    printf("\n");

    for (int l = 0; l < 10; l++)
    {
        printf("%2d ", l + 1);

        for (int c = 0; c < 10; c++)

        {
            printf("%d ", tabuleiro[l][c]);
            
            
        }
        printf("\n");
        
    }
    

    printf("\n\n");



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

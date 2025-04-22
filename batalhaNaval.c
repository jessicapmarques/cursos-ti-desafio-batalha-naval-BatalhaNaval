

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


    #include <stdio.h>

    #define LINHAS 10
    #define COLUNAS 10
    #define agua 0


int main() {

    int tabuleiro [LINHAS] [COLUNAS];
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int navio_1[3] = {3,3,3};
    int navio_2[3] = {3,3,3};
    int navio_3[3] = {3,3,3};
    int navio_4[3] = {3,3,3};

    int cone[3][5] = {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {1,1,1,1,1}
    }; 

    int cruz[3][5] = {
    {0,0,1,0,0},
    {1,1,1,1,1},
    {0,0,1,0,0}
    };

    int octaedro[3][5] = {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {0,0,1,0,0}
    };

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");

    // Mostra as letras/colunas do tabuleiro
    for (int i = 0; i < LINHAS; i++){
        printf("%c ", letras[i]); 
         
    }

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = agua; 
        }
    }

    printf("\n");

    // tabuleiro[4][2] = navio_1[0]; //Inicio primeiro navio
    // tabuleiro[4][3] = navio_1[1];
    // tabuleiro[4][1] = navio_1[2];

    // tabuleiro[6][3] = navio_2[0]; //Inicio segundo navio
    // tabuleiro[7][3] = navio_2[1];
    // tabuleiro[8][3] = navio_2[2];

    // tabuleiro[0][9] = navio_3[0]; //Inicio terceiro navio
    // tabuleiro[1][8] = navio_3[1];
    // tabuleiro[2][7] = navio_3[2];

    // tabuleiro[9][9] = navio_4[0]; //Inicio quarto navio
    // tabuleiro[8][8] = navio_4[1];
    // tabuleiro[7][7] = navio_4[2];

    // Imprime o tabuleiro
    for (int i = 0; i < LINHAS; i++) {
          printf("%2d", numeros[i]);      
    
        for (int j = 0; j < COLUNAS; j++){

            printf("% d", tabuleiro[i][j]);

            if (i == 0 && j == 1) { //ponto de inicio do cone

                for (int l = 0; l < 3; l++) { 
                    for (int m = 0; m < 5; m++){
                        
                        tabuleiro[i+l][j+m] = cone[l][m];  

                    }
        
                }
            }

            if (i == 4 && j == 4 ) { //ponto de inicio cruz
                
                for (int n = 0; n < 3; n++) {
                    for (int o = 0; o < 5; o++) {
                        tabuleiro[i+n][j+o] = cruz[n][o];
                    }
                    
                }
            }


            if (i == 7 && j == 0 ) { //ponto de inicio cruz
                
                for (int p = 0; p < 3; p++) {
                    for (int q = 0; q < 5; q++) {
                        tabuleiro[i+p][j+q] = octaedro[p][q];
                    }
                    
                }
            }
            
        }
            
            
            

        printf("\n");
        
    }

    printf("\n\n");
   
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

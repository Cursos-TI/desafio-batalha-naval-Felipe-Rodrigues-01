#include <stdio.h>
int main(){
// criando o tabuleiro
char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int tabuleiro[10][10] = {0};
//criando os navios
int navioh [3] = {3, 3, 3}; // navio horizontal
int navioV [3] = {3, 3, 3}; // navio vertical
int navioDiag [3] = {3, 3, 3}; //navio diagonal
// Onde ficara os Navios
int linhaHoriz = 3, colunaHoriz = 5;  // Navio horizontal
int linhaVert = 7, colunaVert = 6;   // Navio vertical
int linhaDiag = 5, colunaDiag = 2;
// Inserindo os Navios no tabuleiro
//Navio Horizontal
for(int i = 0; i < 3; i++){
    tabuleiro[linhaHoriz][colunaHoriz + i] = navioh[i];
}
//Navio Vertical
for(int i = 0; i < 3; i++){
    tabuleiro[linhaVert + i][colunaVert] = navioV[i];
}
//Navio Diagonal
for(int i = 0; i < 3; i++){
    tabuleiro[linhaDiag + i][colunaDiag + i] = navioDiag[i];
}

// Exibindo o tabuleiro
    printf("Jogo Batalha Naval\n");
    printf("   ");
    for (int coluna = 0; coluna < 10; coluna++) {
        printf("%d ", coluna);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}
// board.c stub
#include "board.h"

char board[BOARD_SIZE][BOARD_SIZE];

void board_init() {
    // Pieces: R, N, B, Q, K, B, N, R
    
    // Set black pieces (lowercase)
    board[0][0] = "r";
    board[0][1] = "n";
    board[0][2] = "b";
    board[0][3] = "q";
    board[0][4] = "k";
    board[0][5] = "b";
    board[0][6] = "n";
    board[0][7] = "r";
    for(int i = 0; i < 7; i++){
        board[1][i] = "p";
    }    

    // Set empty middle
    for(int i = 2; i < 5; i++){
        for(int j = 0; j < 7; j++){
            board[i][j] = "E";
        }
    }

    // Set white pieces (uppercase)
    board[6][0] = "R";
    board[6][1] = "N";
    board[6][2] = "B";
    board[6][3] = "Q";
    board[6][4] = "K";
    board[6][5] = "B";
    board[6][6] = "N";
    board[6][7] = "R";
    for(int i = 0; i < 7; i++){
        board[7][i] = "P";
    }  
}

char board_get(int row, int col) {

}

void board_set(int row, int col, char piece) {

}

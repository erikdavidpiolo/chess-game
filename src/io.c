// io.c stub
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "io.h"

static int file_to_col(char file) {
}

static int rank_to_row(char rank) {
}

bool io_get_move(Move* move) {
    printf("Please enter your next move in the following format: current position [space] new position.");
    printf("ie. 41 43");
    printf("Where in 41, 4 represents the 5th column from the left and 1 represents the second row from the top.");
    printf("Columns and rows are numbered from 0 to 7");
    int from;
    int from_col;
    int from_row;
    int to;
    int to_col;
    int to_row;
    //receiving input from the user
    scanf("%d", from);
    scanf("%d", to);
    //splitting each digit into their own integer
    from_row = from%10;
    from_col = (from/10)%10;
    to_row = to%10;
    to_col = (to/10)%10;
    struct Move* move{from_row, from_col; to_row, to_col};
    // return is_valid_move()?? but not included in this file


}

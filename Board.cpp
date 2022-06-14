#include "Board.h"

bool Board::setBoard(int row, int col, int symbol){
    if((row >= 0 || row <= 2) && (col >= 0 || col <= 2) && board[row][col] == 0){
        board[row][col] = symbol;
        return true;
    }
    return false;
}

void Board::printBoard(){
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            char symbol = ' ';
            if(board[i][j] == 1){
                symbol = 'X';
            }if(board[i][j] == 2){
                symbol = 'O';
            }
            switch(j){
                case 0: 
                    std::cout << symbol << " | ";
                    break;
                case 1:
                    std::cout << symbol;
                    break;
                case 2:
                    std::cout << " | " << symbol;
                    break;
            }
        }
        if(i == 2)
            break;
        std::cout << std::endl << "---------" << std::endl;
    }
}

int Board::checkWinner(){
    int one = board[0][0] == 0 ? -1 : board[0][0];
    int two = board[0][1] == 0 ? -1 : board[0][1];
    int three = board[1][0] == 0 ? -1 : board[1][0];
    int four = board[2][2] == 0 ? -1 : board[2][2];
    if(one == two && one == board[0][2]){
        return one;
    }if(one == three && one == board[2][0]){
        return one;
    }if(one == board[1][1] && one == board[2][2]){
        return one;
    }if(two == board[1][1] && two == board[2][1]){
        return two;
    }if(three == board[1][1] && three == board[1][2]){
        return three;
    }if(four == board[2][1] && four == board[2][0]){
        return four;
    }if(four == board[1][2] && four == board[0][2]){
        return four;
    }
    return 0;
}
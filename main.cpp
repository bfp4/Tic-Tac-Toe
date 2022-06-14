#include <iostream>
#include "Board.h"

int main(){
    Board ticTacToe;
    int turns = 1;

    while(ticTacToe.checkWinner() == 0 && turns <= 9){
        int row, col;
        bool valid = false;
        int symbol;
        if(turns%2 == 0){
            std::cout << std::endl << "It's O's turn." << std::endl;
            symbol = 2;
        }else{
            std::cout << std::endl << "It's X's turn." << std::endl;
            symbol = 1;
        }
        do{
            std::cout << "Enter a row: ";
            std::cin >> row;
            std::cout << "Enter a column: ";
            std::cin >> col;
            valid = ticTacToe.setBoard(row, col, symbol);
        }while(!valid);

        ticTacToe.printBoard();

        turns = turns + 1;
    }

    switch(ticTacToe.checkWinner()){
        case 1: 
            std::cout << std::endl << "X is the Winner!";
            break;
        case 2: 
            std::cout << std::endl << "O is the Winner!";
            break;
        default: 
            std::cout << std::endl << "Tie.";
            break;
    }

    return 0;
}
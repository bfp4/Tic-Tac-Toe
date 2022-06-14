#include <iostream>

class Board {
    private:
        int board[3][3] = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        };
    public:
        bool setBoard(int row, int col, int symbol);
        void printBoard();
        int checkWinner();
};
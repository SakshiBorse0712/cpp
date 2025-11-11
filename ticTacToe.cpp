#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];

public:
    TicTacToe() {
        // Initialize board with '*'
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = '*';
    }

    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << " " << board[i][j] << " ";
                if (j < 2) cout << "|";
            }
            if (i < 2) cout << "\n---|---|---\n";
        }
        cout << "\n";
    }

    void makeMove(int player) {
        int row, col;
        char mark = (player == 1) ? 'X' : 'O';
        cout << "Player " << player << " (" << mark << "), enter row and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != '*') {
            cout << "Invalid move. Try again.\n";
            makeMove(player);  
        } else {
            board[row][col] = mark;
        }
    }

    bool checkWin(char mark) {
        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
                return true;
            if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)
                return true;
        }
        // Check diagonals
        if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
            return true;
        if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
            return true;
    
        return false;
    }
    
};

int main() {
    TicTacToe game;

    for (int i = 0; i < 9; i++) {
        game.displayBoard();
        int player = (i % 2) + 1;
        game.makeMove(player);
        if (game.checkWin((player == 1) ? 'X' : 'O')) 
        {
            game.displayBoard();
            cout << "Player " << player << " wins!\n";
            return 0;
        }
    }
    game.displayBoard();
    cout << "Game over. It's a draw!\n";
    

    game.displayBoard();
    cout << "Game over (no win check yet).\n";
    return 0;
}

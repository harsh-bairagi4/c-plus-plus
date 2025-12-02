#include <iostream>
#include <vector>

class TicTacToe {
public:
    TicTacToe() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

    void play() {
        std::cout << "Welcome to Tic-Tac-Toe!\n";

        do {
            printBoard();
            getInput();
            checkWin();
            switchPlayer();
        } while (!isGameOver());

        printResult();
    }

private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

    void printBoard() {
        std::cout << "  1 2 3\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << i + 1 << ' ';
            for (int j = 0; j < 3; ++j) {
                std::cout << board[i][j];
                if (j < 2) std::cout << '|';
            }
            std::cout << '\n';
            if (i < 2) std::cout << "  -----\n";
        }
    }

    void getInput() {
        int row, col;
        do {
            std::cout << "Player " << currentPlayer << ", enter row (1-3) and column (1-3): ";
            std::cin >> row >> col;
        } while (!isValidMove(row, col));

        board[row - 1][col - 1] = currentPlayer;
    }

    bool isValidMove(int row, int col) const {
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            std::cout << "Invalid input. Row and column must be between 1 and 3.\n";
            return false;
        }
        if (board[row - 1][col - 1] != ' ') {
            std::cout << "Cell already occupied. Choose another cell.\n";
            return false;
        }
        return true;
    }

    void checkWin() {
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
                printBoard();
                std::cout << "Player " << currentPlayer << " wins!\n";
                return;
            }
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
                printBoard();
                std::cout << "Player " << currentPlayer << " wins!\n";
                return;
            }
        }

        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
            printBoard();
            std::cout << "Player " << currentPlayer << " wins!\n";
            return;
        }
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
            printBoard();
            std::cout << "Player " << currentPlayer << " wins!\n";
            return;
        }
    }

    bool isGameOver() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void printResult() const {
        printBoard();
        std::cout << "It's a draw!\n";
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
};

int main() {
    TicTacToe game;
    game.play();

    return 0;
}


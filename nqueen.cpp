#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<string>& board, int n) {
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q') return false;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q') return false;

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q') return false;

    return true;
}

void solve(int row, vector<string>& board, int n, int& count) {
    if (row == n) {
        cout << "Solution " << ++count << ":\n";
        for (const string& r : board)
            cout << r << "\n";
        cout << "\n";
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q';
            solve(row + 1, board, n, count);
            board[row][col] = '.';
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    int totalSolutions = 0;
    solve(0, board, n, totalSolutions);
    cout << "Total Solutions: " << totalSolutions << "\n";
}

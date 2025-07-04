#include<iostream>
#include<vector>
using namespace std;

    bool isSafe(vector<vector<char>> board, int row, int col, int n, char d){
        for(int i=0; i<n; i++){
            if(board[i][col] == d){
                return false;
            }
        }

        for(int j=0; j<n; j++){
            if(board[row][j] == d){
                return false;
            }
        }

        int startRow = (row/3)*3;
        int startCol = (col/3)*3;

        for(int i=startRow; i<= startRow+2; i++){
            for(int j=startCol; j<=startCol+2; j++){
                if(board[i][j] == d){
                    return false;
                }
            }
        }

        return true;
    }

    bool Solver(vector<vector<char>>& board, int row, int col) {
        int n=board.size();
        if(row == n){
            return true;
        }

        int newRow = row, newCol = col+1;
        if(col == 9){
            newRow = row+1;
            newCol = 0;
        }

        if(board[row][col] != '.'){
            return Solver(board, newRow, newCol);
        }

        for(char i='1'; i<='9'; i++){
            if(isSafe(board, row, col, n, i)){
                board[row][col] = i;
                if(Solver(board, newRow, newCol))return true;
                board[row][col] = '.';
            }
        }
        return false;
    }

int main(){
    vector<vector<char>> board = {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    cout<<Solver(board, 0, 0);
    return 0;
}
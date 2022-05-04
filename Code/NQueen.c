#include <stdio.h>
#include <stdbool.h>
#define N 8 //size of board
void printSolution(int board[N][N]);
bool solveNQueens(int board[N][N], int col);
bool isSafe(int board[N][N], int row, int col);
int main(){
int board[N][N] = {
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0}
};
if(!solveNQueens(board, 0)){
printf("No solution exists!");
}
printSolution(board);
}
bool solveNQueens(int board[N][N], int col){
if(col >= N)
return true;
for(int i=0;i<N;i++){
if(isSafe(board, i, col)){
board[i][col] = 1; //place queen
if(solveNQueens(board, col+1))//move to next column
return true;
//if placing a queen doesnt lead to soluion,
//then remove queen ie backtrack
board[i][col] = 0;
}
}
return false; //if queen cant be placed in col
}
bool isSafe(int board[N][N], int row, int col){
for(int i=0;i<col;i++){
if(board[row][i])
return false;
}
for(int i=row, j=col;i>=0 && j>=0;i--,j--){
if(board[i][j])
return false;
}
for(int i=row, j=col;j>=0 && i<N;i++, j--){
if(board[i][j])
return false;
}
return true;
}
void printSolution(int board[N][N])
{
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++)
printf(" %d ", board[i][j]);
printf("\n");
}
}
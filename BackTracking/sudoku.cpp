#include <iostream>
#define N 9
using namespace std;

void printGrid(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValid(int board[N][N], int x, int y, int val)
{
    for (int j = 0; j < N; j++)
    {
        if (board[x][j] == val)
        {
            return false;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (board[i][y] == val)
        {
            return false;
        }
    }

    int smi = x / 3 * 3;
    int smj = y / 3 * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[smi + i][smj + j] == val)
            {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int board[N][N], int i, int j)
{

     if (i == N - 1 && j == N)
        {
            return true;
        }

        if(j == N){
            i++;
            j=0;
        
        }

    if (board[i][j] > 0)
    {
        return solveSudoku(board, i, j+1);
    }
    
        for (int po = 1; po <= 9; po++)
        {
            if (isValid(board, i, j, po))
            {
                board[i][j] = po;
                if(solveSudoku(board, i, j+1)){
                    return true;
                }
                
            }
            board[i][j] = 0;
        }
    
    return false;
}

int main()
{

    int board[N][N] ={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    if (solveSudoku(board, 0, 0)){
        printGrid(board);
    } 
    else{
         cout << "no solution  exists " << endl;
    }
}
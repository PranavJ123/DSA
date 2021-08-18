#include <iostream>
#include <string>
using namespace std;
#define N 4

bool isSafe(int chess[N][N], int row, int col)
{
    for (int i = row - 1, j = col; i >= 0; i--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    return true;
    
}

void printNQueens(int chess[N][N], string qsf, int row)
{
    if (row == N)
    {
        cout << qsf << " " << endl;
        return;
    }

    for (int col = 0; col < N; col++)
    {
        if (isSafe(chess, row, col) == true)
        {

            chess[row][col] = 1;
            printNQueens(chess, qsf + to_string(row) + " - " + to_string(col) + " , ", row + 1);
            chess[row][col] = 0;
        }
    }
}

int main()
{
    int arr[N][N];
    printNQueens(arr, "", 0);
    return 0;
}

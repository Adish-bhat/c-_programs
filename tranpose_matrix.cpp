#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int a[100][100], transpose[100][100], row, column;
    cout << "Enter rows and columns of matrix: ";
    cin >> row >> column;
    cout << "\nEnter elements of matrix: " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Enter element of a : ";
            cin >> a[i][j];
        }
    }
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << " " << a[i][j];
            if (j == column - 1)
                cout << endl
                     << endl;
        }
    }
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < column; ++i)
        for (int j = 0; j < row; ++j)
        {
            cout << " " << transpose[i][j];
            if (j == row - 1)
                cout << endl
                     << endl;
        }
    return 0;
}
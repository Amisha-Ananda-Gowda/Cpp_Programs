#include <iostream>
using namespace std;

int main()
{
    int i, j, row;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    for (i = 0; i < 2 * row; i++)
    {
        for (j = 0; j < 2 * row; j++)
        {
            if (j == 0)
            {
                cout << "* ";
            }
            else if (j <= i && i < row)
            {
                cout << "* ";
            }
            else if (j == 2 * row - 1)
            {
                cout << "* ";
            }
            else if (i == row || i == row - 1)
            {
                cout << "* ";
            }
            else if (i > row && j < 2 * row - i)
            {
                cout << "* ";
            }
            else if (i < row && j >= 2 * row - i - 1)
            {
                cout << "* ";
            }
            else if (i > row && j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // for (i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }

    //     int space = 2 * row - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int i, j, row, print = 1;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    for (i = 0; i < row + 1; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            if (print == 0)
            {
                cout << 0 << " ";
                print++;
            }
            else
            {
                cout << 1 << " ";
                print--;
            }
        }
        cout << endl;
    }

    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}
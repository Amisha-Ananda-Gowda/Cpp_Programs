#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int row, column, i;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> column;
    for (i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if( i == 0 || j==0 || i==row -1 ||j==column-1){
            cout << "* ";
        }
        else{
            cout<<"  ";
        }
        }
        cout << endl;
    }

    return 0;
}
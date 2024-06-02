#include <iostream>
using namespace std;

int main()
{
    int i, j, row;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++){
            if(j<row-i-1){
 cout << "  ";
            }
            else{
                cout<<"* ";
            }
        }
           
        cout << endl;
    }
    return 0;
}
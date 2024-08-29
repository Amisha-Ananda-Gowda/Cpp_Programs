#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size" << endl;
    cin >> n;
    for (i = 1; i <= 3 * n; i++)
    {
        for (j = 1; j <= 3 * n; j++)
        {
            if ((i == 1) || (j == 1) || (j == 3 * n) || (i == 3 * n / 2 + 1))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        cout << endl;
    }

    for (i = 1; i <= 3 * n; i++)
    {
        for (j = 1; j <= 3 * n; j++)
        {
            if ((i == 1) || (j == 1) || (j == 3 * n) || (i == 3 * n / 2 + 1))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        cout << endl;
    }

    for (i = 1; i <= 3 * n / 2; i++)
    {
        for (j = 1; j <= 3 * n; j++)
        {
            if ((i == 1) || (j == 1) || (i == 3 * n / 2 + 1))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    for (i = 1; i <= 3 * n / 2 + 1; i++)
    {
        for (j = 1; j <= (3 * n + 3 * n / 2); j++)
        {
            if ((j == 1) || (j == 3 * n) || ((i == 3 * n / 2 + 1) && (j <= 3 * n)) || (i == 1) && (j > 3 * n) || (j == (3 * n + 3 * n / 2)))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    /*
       for(i=1;i<=3*n;i++)
        {
            for(j=1;j<=3*n;j++){
                if((j==1)||(j==3*n)||(i==3*n)){
                   cout<<" * ";
                }
                else if((j>1)&&(j<3*n/2)){
                    cout<<"*";
                }
              else{
                cout<<"   ";
              }
            }
              cout<<endl;
        }
    for(i=1;i<=n;i++){
        cout<<endl;
    }

       for(i=1;i<=3*n;i++)
        {
            for(j=1;j<=3*n;j++){
                if((i==1)||(i==3*n)||(j==3*n/2+1)){
                   cout<<" * ";
                }
              else{
                cout<<"   ";
              }
            }
              cout<<endl;
        }
        */

    return 0;
}
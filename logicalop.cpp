#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Divisible by both" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "Divisible by only 2" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Divisible by only 3" << endl;
    }
    else
    {
        cout << "Divisible by none" << endl;
    }
    return 0;
}
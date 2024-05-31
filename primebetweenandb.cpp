#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if (count == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
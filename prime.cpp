#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int count = 0;
    for (int i = 1; i < num; i++)
    {

        if (num % i == 0)
        {
            count += 1;
        }
    }
    if (count == 1)
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }
    return 0;
}
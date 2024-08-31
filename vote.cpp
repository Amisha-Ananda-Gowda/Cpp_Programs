#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age > 150)
    {
        cout << "Invalid Age" << endl;
    }
    else if (age >= 18)
    {
        cout << "You Can vote" << endl;
    }
    else
    {
        cout << "You can't vote" << endl;
    }
}
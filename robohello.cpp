#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout << "Enter an alphabet from a to e" << endl;
    cin >> alpha;
    if (alpha == 'a')
    {
        cout << "Hello" << endl;
    }
    else if (alpha == 'b')
    {
        cout << "Namaste" << endl;
    }
    else if (alpha == 'c')
    {
        cout << "Salut" << endl;
    }
    else if (alpha == 'd')
    {
        cout << "Hola" << endl;
    }
    else if (alpha == 'e')
    {
        cout << "Ciao" << endl;
    }
    else
    {
        cout << "I am still learning more" << endl;
    }
    return 0;
}
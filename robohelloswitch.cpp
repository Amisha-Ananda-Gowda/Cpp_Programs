#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout << "Enter an alphabet" << endl;
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salut" << endl;
        break;
    case 'd':
        cout << "Hola" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;
    default:
        cout << "I am still learning" << endl;
        break;
    }

    return 0;
}
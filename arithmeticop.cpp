#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k = 3;
    int x = i + j + k;
    int y = i++ + j++ + k++ + i + j + k;
    int z = ++i + ++j + ++k + i + j + k;
    int a = i-- + j-- + k-- + i + j + k;
    int b = --i + --j + --k + i + j + k;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}
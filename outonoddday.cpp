#include <iostream>
using namespace std;

int main()
{
    int pocket_money = 3000;
    for (int day = 1; day <= 30; day++)
    {
        if (day % 2 == 0)
        {
            continue;
        }
        if (pocket_money == 0)
        {
            break;
        }
        cout << "Go out today!" << endl;
        pocket_money -= 300;
    }
    return 0;
}
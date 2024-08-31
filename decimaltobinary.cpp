#include <iostream>
using namespace std;

int decimaltobinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
        x *= 2;
    x /= 2;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a decimal number" << endl;
    cin >> n;
    cout << "Binary form of " << n << " is " << decimaltobinary(n) << endl;
}
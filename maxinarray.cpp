#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in a array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}
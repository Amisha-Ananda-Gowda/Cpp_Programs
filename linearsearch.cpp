#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
        }
    }
    return pos;
}

int main()
{
    int n, key;
    cout << "Enter the number of elements in a array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key value" << endl;
    cin >> key;
    int p = linearSearch(arr, n, key);
    if (p > -1)
    {
        cout << key << " is present at position" << p << endl;
    }
    else
    {
        cout << key << " not found" << endl;
    }
    return 0;
}
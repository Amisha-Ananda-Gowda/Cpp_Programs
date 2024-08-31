#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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
    int p = binarySearch(arr, n, key);
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
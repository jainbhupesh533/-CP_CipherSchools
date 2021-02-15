#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return i - 1;
        }
    }
    return n - 1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << peakElement(arr, n) << endl;
}
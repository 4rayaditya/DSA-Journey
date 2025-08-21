#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_i = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_i] > arr[j])
            {
                min_i = j;
            }
        }
        int temp = arr[min_i];
        arr[min_i] = arr[i];
        arr[i] = temp;
    }
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Selection_Sort(arr, n);
    return 0;
}

// Time Complexity is O(N^2)
// Space Complexity is O(1)
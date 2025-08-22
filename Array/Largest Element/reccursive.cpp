#include <bits/stdc++.h>
using namespace std;

int largest_Element(vector<int> &arr)
{
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    int max = largest_Element(arr1);
    cout << "The largest element in the array is: " << max << endl;

    vector<int> arr2 = {8, 10, 5, 7, 9};
    max = largest_Element(arr2);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}

// time complexity = O(N)
// space compelxity = O(1)
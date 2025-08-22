#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return true;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    bool ans = isSorted(arr);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}

// time complexity = O(N^2)
// space complexity = O(1)
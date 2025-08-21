#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern2(n);
    return 0;
}
// This code prints a right-angled triangle pattern of asterisks based on the input number n.
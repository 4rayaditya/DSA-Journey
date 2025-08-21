#include <bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern3(n);
    return 0;
}
// This code prints a pattern of numbers where each row contains numbers from 1 to the row number.
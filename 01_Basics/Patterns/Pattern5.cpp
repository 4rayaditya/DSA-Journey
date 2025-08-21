#include <bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
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
    pattern5(n);
    return 0;
}
// This code prints a right-angled triangle pattern of stars in descending order.
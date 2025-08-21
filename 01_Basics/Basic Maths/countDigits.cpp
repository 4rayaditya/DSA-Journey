#include <iostream>
using namespace std;

// Optimal Approach to Count Digits in an Integer
int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0)
    {
        count = 1; // Special case for 0
    }
    else
    {
        while (n > 0)
        {
            n /= 10; // Remove the last digit
            count++; // Increment the count
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}

// Brute Force Approach to Count Digits in an Integer
int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }
    return count;
}

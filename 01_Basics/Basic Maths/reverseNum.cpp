#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;                               // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        n /= 10;                                          // Remove the last digit from n
    }

    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}
// This program reverses the digits of an integer input by the user.
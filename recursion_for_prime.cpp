// Recursive program for prime number

#include <bits/stdc++.h>
using namespace std;

int is_Prime(int n, int i)
{
    if (n <= 2)
    {
        return (n == 2) ? true : false;
    }

    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }

    return is_Prime(n, i+1);
}

int main()
{
    int n;
    cout << "Enter number to check number is prime or not\n";
    cin >> n;

    if (is_Prime(n, 2))
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int is_Prime(int n)   // Efficient Method
{
    if (n<=1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }

    return 1;
    
    
}

int main()
{
    int n;
    cout << "Enter number to check number is prime or not\n";
    cin >> n;

    if (is_Prime(n))
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
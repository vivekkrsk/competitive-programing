#include <bits/stdc++.h>
using namespace std;

void sieve_of_atkin(int limit)
{
    if (limit > 2)
    {
        cout << 2 << " ";
    }
    if (limit > 3)
    {
        cout << 3 << " ";
    }

    bool sieve[limit];
    memset(sieve, false, sizeof(sieve));

    for (int x = 1; x * x < limit; x++)
    {
        for (int y = 1; y * y < limit; y++)
        {
            int n = (4 * x * x) + (y * y);

            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
            {
                sieve[n] ^= true;
            }

            n = (3 * x * x) + (y * y);

            if (n <= limit && n % 12 == 7)
            {
                sieve[n] ^= true;
            }

            n = (3 * x * x) - (y * y);

            if (x > y && n <= limit && n % 12 == 11)
            {
                sieve[n] ^= true;
            }
        }
    }

    for (int i = 5; i * i < limit; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; i < limit; j += i * i)
            {
                sieve[j] == false;
            }
        }
    }

    for (int i = 5; i < limit; i++)
    {
        if (sieve[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    cout << "Following are number less than or equal to " << n << endl;

    sieve_of_atkin(n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    bool prime[n+1];
    
    memset(prime, true, sizeof(prime));

    

    for (int i = 3; i*i <= n; i+=2)
    {
        if (prime[i/2]== true)
        {
            for(int j=3*i; j<=n; j+=2*i)
            {
                prime[j/2]=false;
            }
        }
        
    }
    

     for (int i = 2; i <= n; i++)
    {
        if (i==2)
        {
            cout<<i<<" ";
        }
        else if (i%2== 1 && prime[i/2] == true)
        {
            cout<<i<<" ";
        }
        
        
    }
    
}

int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    cout<<"Following are number less than or equal to "<<n<<endl;

    sieve_of_eratosthenes(n);

    return 0;
}
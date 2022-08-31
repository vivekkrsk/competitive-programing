#include <bits/stdc++.h>
using namespace std;


// Time == O(n*log(logn))
// space == O(n)

void sieve_of_eratosthenes(int n)
{
    bool prime[n+1];
    
    memset(prime, true, sizeof(prime));

    for (int i = 2; i*i <= n; i++)
    {
        if (prime[i]==true)
        {
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=false;
            }
            
        }
        
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
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
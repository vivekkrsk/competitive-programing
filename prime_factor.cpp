#include <bits/stdc++.h>
using namespace std;

void prime_factor(int n)
{
    if (n==1)
    {
        cout<<1<<endl;
    }
    
    while (n%2==0)
    {
        cout<<2<<" + ";
        n/=2;
    }

   

    for (int i = 3; i <= sqrt(n); i+=2)
    {
      
        while (n%i==0)
        {
            cout<<i<<" + ";
            n/=i;
        }
        
    }
    if (n>2)
    {
        cout<<n<<endl;
    }
    
    
}

int main()
{
     int n;
    cout << "Enter number\n";
    cin >> n;
    cout<<"Prime number of following number are equal to "<<endl;
    prime_factor(n);


    return 0;
}
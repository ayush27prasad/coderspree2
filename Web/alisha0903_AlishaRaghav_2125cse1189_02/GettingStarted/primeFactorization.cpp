#include <bits/stdc++.h>
using namespace std;
void PrimeFactors (int n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n/=2;
    }
    int i; 
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2)
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    PrimeFactors(n);
    return 0;
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll digitsum(ll n)
{
    ll sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void gcd()
{
    ll n;
    cin>>n;
    while(1)
    {
        if(__gcd(n,digitsum(n))>1)
        {
            cout<<n<<"\n";
            return;
        }
        n++;
    }
}
int main()
{
    fast;
    ll t=1;
cin>>t;
for(ll i=1;i<=t;i++)
{
    gcd();
}




}

#include<bits/stdc++.h>
typedef long long ll;
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isprime(ll n)
{
     for(ll i = 2; i*i <= n ; i++)
     {
        if(n%i == 0) return false;

     }

     return true;
}
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
  optimise();
  ll i,t,n,a,b,c,d,u=0,res=0,ans=0;
  cin>>t;
  while(t--)
    {
        cin>>n;
        if(n%2==1||n<4)
        {
            
            cout<<-1<<endl;
        }else
        {
            
            ll mn=INT_MAX,mx=INT_MIN,ans=0;
            mn=n/6;
            ll bus=n%6;
            if(bus!=0)
            {
                mn++;
            }
            mx=n/4;
            cout<<mn<<" "<<mx<<endl;
            
            
        }

    }
   sesh_to
  }




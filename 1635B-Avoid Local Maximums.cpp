#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
typedef long long ll;
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
#define PI 2*acos(0.0)
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
ll n,t,i,mx=0,count=0;
cin>>t;
while(t--)
{

    cin>>n;
    ll a[n+6];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=0;
    ll high=0;
    for(i=1;i<n-1;i++)
    {
     if(a[i]>a[i-1]&&a[i]>a[i+1])
     {
      high++;
      if(a[i+2]==max(a[i],max(a[i+1],a[i+2])))
      {
          a[i+1]=a[i+2];
      }
      else if(a[i]>a[i+1])
      {
          a[i+1]=a[i];
      }
      else
      {
          a[i]=a[i+1];
      }
     }
    }
    cout<<high<<endl;
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

   sesh_to
  }


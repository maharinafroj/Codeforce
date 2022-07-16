#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
typedef long long ll;
#define debug(x) cerr<<"-"<<#x<<":"<<x<<endl;
#define debugs(x,y) cerr<<"-"<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
#define PI 2*acos(0.0)
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll lcm(ll a,ll b)
{
    return (a/(__gcd(a, b)))*b;
}
bool is_prime(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;

        }
    }
    return true ;
}
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1; i<j; i++,j--)
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
   ll n,t,k,i;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       ll a[n*2+9];
       for(i=0;i<n*2;i++)
       {
           cin>>a[i];
       }
       sort(a,a+2*n);
       vector<ll>v;
       vector<ll>v1;
//       for(i=0;i<n/2;i++)
//       {
//           v.push_back(a[i]);
//       }
//       for(i=n/2;i<n;i++)
//       {
//           v1.push_back(a[i]);
//       }
    bool flag=false;
       for(i=0;i<n;i++)
       {
        if(a[n+i]-a[i]<k)
        {
           flag=true;
           break;
        }
       }
       if(!flag)
       {
        HA
       }
       else
       {
        NA
       }
   }
sesh_to
}

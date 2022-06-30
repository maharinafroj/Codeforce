

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
const int N=1e8;
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
   ll t,n,p,q,i,x,y;
   cin>>n>>q;
   ll a[n];
   ll b[n];
   for(i=1;i<=n;i++)
   {
       cin>>a[i];

   }
   sort(a+1,a+n+1);
   reverse (a+1,a+n+1);
   for(i=1;i<=n;i++)
   {
       b[i]=b[i-1]+a[i];
   }
   while(q--)
   {
        cin>>x>>y;
        y=x-y;
       // debug(y);
    ll ans=b[x]-b[y];
cout<<ans<<endl;
   // debug(ans);
   }
    sesh_to
}




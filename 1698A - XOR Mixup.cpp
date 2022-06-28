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
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    int N,n,i,a,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n%2!=0)
        {
            int m1=n/2;
            cout<<v[m1]<<endl;
            //debug(v[m1]);
        }
        else
        {
            int m1=(n/2)-1;
 
        int x_or=0;
            for(i=0; i<m1; i++)
            {
                x_or=x_or^v[i];
                x_or=x_or^v[n-i-1];
            }
            x_or=x_or^v[m1+1];
            if(x_or==v[m1])
            {
                cout<<v[m1]<<endl;
                //debug(v[m1]);
            }
            else
            {
                //debug(v[m1+1]);
            cout<<v[m1+1]<<endl;
            }
        }
    }
 
    sesh_to
}
 

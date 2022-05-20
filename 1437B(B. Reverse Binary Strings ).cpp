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
int sod(int n)
{

    if(n==0)
        return 0;
    return (n%10+sod(n/10));
}
int main()
{
  optimise();
 int t,i,n,zero=0,one=0;
  cin>>t;
  while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        zero=0,one=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0'&&s[i-1]=='0')
            {
                zero++;
            }
            if(s[i]=='1'&&s[i-1]=='1')
            {
                one++;
            }
        }
        cout<<max(zero,one)<<endl;

    }
   sesh_to
  }




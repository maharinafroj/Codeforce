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
  
    string s;
  ll i,j;
  cin>>s;
  for(i=0;i<s.size();i++)
    {
      s[i]=tolower(s[i]);
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
      {
        continue;
      }
      else
      {
        cout<<'.'<<s[i];
      }
    }
  cout<<"\n";
   sesh_to
  }


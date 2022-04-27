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
  set<int>s;
  vector<int>v;
 set<int>:: iterator it;
  int i,t,a,b;
 cin>>t;
 
  for(i=0;i<t;i++)
    {
      cin>>a;
      s.insert(a);
    }
    
   for (it = s.begin(); it != s.end(); it++)
    {
       int x=*it;
       v.push_back(x);
       // cout << *it << endl; 
      }
   //for (int j=0;j<v.size();j++){
      //cout<<v[1]<<endl;
   //}
   if(v.size()==1)
    {
        NA
    }
  else
    cout<<v[1]<<endl;
    
   sesh_to
  }

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
 ll t,i,j,a,b,n;

  cin>>t;
  while(t--)
    {
        cin>>a>>b;
         n=a+b;
        if(b>=a)
        {
            for(i=0;i<n;i++)
            {
                if(a&&i%2==1)
                {
                    cout<<"0";
                    a=a-1;
                }
                else
                {
                    cout<<"1";

                }

            }
            cout<<endl;
        }
            else
            {
                for(i=0;i<n;i++)
                {
                    if(b&&i%2==0)
                    {
                        cout<<"1";
                        b=b-1;
                    }
                    else
                    {
                        cout<<"0";
                    }
                }

            }
             cout<<endl;


         }

   sesh_to
  }



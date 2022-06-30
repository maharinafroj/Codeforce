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
    ll t,n,k,i,d;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a;
        cin>>s;
        if(s[0]!='9')
        {
            for(i=0; i<n; i++)
            {
                int x=s[i]-'0';
                int y=9-x;
                a+=y+'0';
            }
        }
        else
        {
            int carry=0;
            for(i=n-1; i>=0; i--)
            {
                int x=s[i]-'0';
                x+=carry;
                if(x>1)
                {
                    int y=11-x;
                    carry=1;
                    a+=(y+'0');

                }
                else
                {
                    carry=0;
                    int y=1-x;
                    a+=(y+'0');
                }
            }
            reverse(a.begin(),a.end());
        }
        cout<<a<<endl;

    }

    sesh_to
}


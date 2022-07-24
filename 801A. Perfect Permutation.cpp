


#include<bits/stdc++.h>
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
const long long N = 50000;
const ll mod=1e9+7;
long long P[10000];
long long S = 0;
static bool prime[N + 1];
void sieve()
{
    prime[0] = true;
    prime[1] = true;

    for (long long i = 2; i <= N; i++)
    {
        if (!prime[i])
        {
            P[S++] = i;
            for (long long j = i * i; j <= N; j += i)
            {
                prime[j] = true;
            }
        }
    }
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
bool isPrime(int n)
{
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int gcd(int a,int b){
    if(a == 0)
        return b;
    return gcd(b%a,a);
}
ll lcm(ll a,ll b)
{
    return (a/(__gcd(a, b)))*b;
}
void PrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
int sod(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10+sod(n/10));
}
int prime_factor(int n)
{
  //  cin>>n;
    vector<int>v;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                v.push_back(i);
                n/=i;

            }
        }
    }
    if(n>1)
    {
        v.push_back(n);
    }
    for(auto x:v)
    {
        cout<<x<<' ';
    }
}
//int test(int t)
//{
//    cin>>t;
//    while(t--)
//    {
//        return t;
//    }
//}
//function to find number of divisors of a number
int numofDiv(int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            count++;
        else
            count+=2;
        }

    }
    return count;
}
int finddiv(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        if(i!=n/i)
        {
            cout<<n/i<<" ";
        }
    }
    //return n;
}
int main()
{
    optimise();
ll t,n,b,k,i;
cin>>t;
while(t--)
{
   cin>>n;
   for(i=2;i<=n;i++)
   {
       cout<<i<<" ";
   }
   cout<<'1'<<" ";

cout<<endl;
}
    sesh_to
    //bubtselection
}









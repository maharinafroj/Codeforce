#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,i,mx=0,mn=0;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==1)
    {
        cout<<"Mike"<<'\n';
        continue;
    }
    mn=0;

    for(i=0;i<n;i++)
    {
        if(a[i]<a[mn])
        {
            mn=i;
        }
    }
    if(mn%2==0)
    {
        cout<<"Joe"<<'\n';
    }
    else
        cout<<"Mike"<<'\n';
}
return 0;
}

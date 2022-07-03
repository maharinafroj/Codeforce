#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int a[n+3],b[n+3];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
     for(i=0; i<n; i++)
     {
    cin>>b[i];
     }

    sort(a,a+n);
    sort(b,b+n);
    int ans=0;
    for(i=n-1; i>=0; i--)
    {

        if((a[i]>b[i])||(b[i]-a[i])>1)
        {
            ans=1;
            break;
        }
    }
    if(ans==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}

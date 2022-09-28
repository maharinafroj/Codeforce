#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a>b&&(a-b)%2==0)
        {
         cout<<1<<endl;
        }
        else if(b>a&&(b-a)%2==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}

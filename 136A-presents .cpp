#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,a;
    vector<int>v;

    cin>>n;
    int ar[n];
    for(i=1;i<=n;i++)
    {
        cin>>a;
        ar[a]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
return 0;

}

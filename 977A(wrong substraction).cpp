#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
int n,k,i;
cin>>n>>k;
while(k--)
{
    
    if(n%10!=0)
    {
        n--;
    }
    else
    {
        n/=10;
    }
}

cout<<n<<endl;
return 0;
}

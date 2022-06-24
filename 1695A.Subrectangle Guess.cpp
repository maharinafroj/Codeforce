#include<bits/stdc++.h>
using namespace std;
int G[45][45];
int main()
{
    int t,n,m,i,j,h=0,w=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int mxi=0,mxj=0;
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                cin>>G[i][j];
                if(G[i][j]>G[mxi][mxj])
                    mxi=i,mxj=j;
            }
        }
            h=max(mxi+1,n-mxi);
            w=max(mxj+1,m-mxj);
            cout<<h*w<<'\n';

    }
    return 0;
}

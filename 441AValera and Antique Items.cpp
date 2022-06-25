#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long>k;
    long long int n,v,t,a,i,j;
 long long num[55];
    cin>>n>>v;
    for(i=0;i<n;i++)
    {
         bool flag=false;
        cin>>t;

    for(j=0;j<t;j++)
    {
        cin>>a;

           if(!flag && v>a)
         {
        flag=true;
        k.push_back(i);
         }
    }
    }

  cout<<k.size()<<endl;
  for(i=0;i<k.size();i++)
  {
      cout<<k[i]+1<<" ";
  }
  cout<<endl;
  return 0;
       }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int z=1;
    while(t--)
    {
int n,i,j;
      cin>>n;
        vector<vector<int> > a( n+1 , vector<int> (n+1));
        int k=2*n-1;
int sum[k],count;
for(i=0;i<k;i++)
    sum[i]=0;
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
      {

          cin>>a[i][j];
          //cout<<i-j<<" "<<a[i][j]<<endl;
         sum[i-j+n-1]=sum[i-j+n-1]+a[i][j];

      }

      sort(sum,sum+k);

      count=sum[k-1];

        cout<<"Case #"<<z<<": "<<count<<endl;
        z++;


    }

}
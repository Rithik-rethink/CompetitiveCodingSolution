#include<bits/stdc++.h>
using namespace std;
 
int solve(int a[],int n,int sum)
{
   int t[n+1][sum+1],i,j;
   for(i=0;i<n+1;i++)
        for(j=0;j<sum+1;j++)
   {
       if(j==0)
        t[i][j]=0;
       if(i==0)
        t[i][j]=INT_MAX-1;
   }
   i=1;
   for(j=1;j<sum+1;j++)
   {
       if(j%a[i-1]!=0)
       t[i][j]=INT_MAX-1;
       else if(j%a[i-1]==0)
       {
           t[i][j]=j/a[i-1];
       }
   }
   for(i=2;i<n+1;i++)
    for(j=1;j<sum+1;j++)
 
   {
       if(a[i-1]<=j)
       t[i][j]=min(t[i][j-a[i-1]]+1,t[i-1][j]);
       else
        t[i][j]=t[i-1][j];
 
   }
   return t[n][sum];
}
 
 
int main()
{
    int n,sum,i,a[1000],s=0,p;
    cin>>n>>sum;
    //cout<<n<<sum<<endl;
    for(i=0;i<n;i++)
       {
 
        cin>>a[i];
        s=s+a[i];}
        /*cout<<"DD"<<s<<endl;
        if(s<sum)
            cout<<"-1"<<endl;
        else*/
       // cout<<
        p=solve(a,n,sum);
        if(p==INT_MAX-1)
            cout<<"-1"<<endl;
        else
            cout<<p<<endl;
}
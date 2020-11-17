#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int fn( int n ) {
    vector<int>dp(n+1);
     dp[0]=a;
   dp[1]=b;
   dp[2]=c;
     dp[3]=d;
     dp[4]=e;
     dp[5]=f;
  
int i;
    for( i=6;i<=n;i++)
        {dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
            
        }

        return dp[n];
}
int main() {
    int n, caseno = 0, cases;
    cin>>caseno;
    cin>>a>>b>>c>>d>>e>>f>>n;
    cout<<endl;
	cout << "Case " << 1 << ": "<<fn(n)%10000007<<endl;

    for(int i=2; i<=caseno; ++i) {
        cin>>a>>b>>c>>d>>e>>f>>n;
        int temp =fn(n)%10000007;
		cout << "Case " << i << ": "<<temp<<endl;
	}
    return 0;
}
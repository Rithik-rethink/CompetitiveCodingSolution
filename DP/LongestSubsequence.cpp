#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

ll arr[1001][1001];
ll sub(string r , string s , ll n , ll m ){
    if(n == 0 || m == 0){
        return 0;
    }
    if(arr[n][m]!=-1){
        return arr[n][m];
    }
    if(r[n-1] == s[m-1]){
        return arr[n][m] = 1+sub(r,s,n-1,m-1 );
    }
    else{
        return arr[n][m] = max(sub(r,s,n,m-1) , sub(r,s,n-1, m ));
    }
}

void solve() {
	//implementation goes here
    
    string r,s;
    memset(arr,-1,sizeof(arr));
    cin>>r>>s;
    ll res = sub(r,s,r.size() , s.size());
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
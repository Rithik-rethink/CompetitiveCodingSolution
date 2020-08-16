#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll findsum(ll n){
    
    if(n<=0){
        return 0;
    }
    return( n+findsum(n-2));
    
}
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    if( n % 2 != 0){
        n-=1;
    }
    cout<<findsum(n)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll x,y,n,m;
    cin>>x>>y;
    cin>>n>>m;
    ll one =  (x + y) * n;
    ll second = min(x,y) * m;
    second += abs(x-y) * n;
    cout<<min(one,second)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
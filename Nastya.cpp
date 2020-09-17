#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n>>m;
    ll res = min(m - 1, n - m);
    res += (n-1);
    res += 5;
    n -= 2;
    res += n*2;
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll div = __gcd(x,y);
    x /= div;
    y /= div;
    // cout<<x<<" "<<y<<endl;
    a = a/x;
    b = b/y;
    cout<<min(a,b)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


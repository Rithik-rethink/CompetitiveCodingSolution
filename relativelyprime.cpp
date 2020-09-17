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
    ll i = n;
    cout<<"YES"<<endl;
    while( i < m)
    {
        cout<<i<<" "<<i+1<<endl;
        i += 2;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

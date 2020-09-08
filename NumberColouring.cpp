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
    ll temp = __gcd(n , m);
    if(temp != 1){
        cout<<"INFINITE"<<endl;
        return;
    }
    cout<<"FINITE"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		//cout << "Case #" << i << ": ";
		solve();
	}
}
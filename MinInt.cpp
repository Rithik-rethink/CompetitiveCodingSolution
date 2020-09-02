#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll l , r , d;
    cin>>l>>r>>d;
    if(d < l){
        cout<<d<<endl;
        return;
    }
    ll temp = r / d;
    cout<<d * (temp + 1)<<endl; 
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
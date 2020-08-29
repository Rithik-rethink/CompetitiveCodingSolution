#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m;
    cin>>n>>m;
    for(int i = n ; i <= m ; ++i){
        if( (2* i) <= m){
            cout<<i<<" "<<2*i<<endl;
            return;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
            return;
        }
    }
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
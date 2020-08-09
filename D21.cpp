#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n ;
    cin>>n;
    ll temp = n;
    ll b = n % 5;
    ll x;
    if(b != 0){
        x = b - 1;
        n -= x;
    }
    ll rem = n / 5;
    ll res = 1 + rem*3;
    if( b == 0){
        cout<<res-1<<endl;
        return;
    }
    else if(b >1 && b <= 3){
        res += 1;
    }
    else if(b == 4){
        res += 2;
    }
    cout<<res<<endl;
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
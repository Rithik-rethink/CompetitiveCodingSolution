#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    if(n % 2 != 0){
        cout<<0<<endl;
        return;
    }
    n /= 2;
    ll res = 1;
    for(int i = 0 ; i < n ; ++i){
        res *= 2;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
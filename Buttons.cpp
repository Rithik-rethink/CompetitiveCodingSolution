#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    ll res = n ;
    for(int i = 1 ; i <= n ; ++i){
        res += i * (n - i);
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
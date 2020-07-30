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
    ll res;
    if(n % 2 != 0 ){
        res = n / 2 + 1;
    }
    else{
        res = n / 2;
    }

    n -= res;
    res += n*2;
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
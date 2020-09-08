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
    ll a=  min(n,m);
    ll b = max(n , m);
    ll i = 0;
    ll res = 0 ;
    if(abs(a-b)>=10){
        ll temp = abs(b - a) / 10;
        a = a + (10 * temp);
        //cout<<a<<endl;
        res += temp;
    }
    //cout<<res<<endl;
    if(a!=b)
        res += 1;
    
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
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    if(k==0 && n % 2 != 0){
        cout<<1<<endl;
        return;
    }
    else if(k == 0 && n % 2 == 0){
        cout<<0<<endl;
        return;
    }
    if(k < n ){
        if( (n % 2 == 0 && k % 2!=0) || (n%2 != 0 && k % 2 == 0)){
            ll temp = n / k;
            ll r = temp + 1;
            r = k * r;
            temp *= k;
            ll a = abs( n - r);
            ll b = abs( n - temp );
            if(a == 0){
                cout<<b<<endl;
                return;
            }
            else if( b == 0){
                cout<<a<<endl;
                return;
            }
            cout<<min(a,b)<<endl;
            return;
        }
        cout<<0<<endl;
        return;
    }
    
    cout<<abs(n-k)<<endl;
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
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
    vector<ll> arr = {6,2,5,5,4,5,6,3,7,6};
    ll res = 0;
    for(int i = n ; i <= m ; ++i ){
        ll m = i;
        while( m != 0){
            ll rem = m % 10;
            res += arr[rem];
            m/=10;
        }                    
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


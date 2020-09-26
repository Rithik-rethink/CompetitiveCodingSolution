#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll fact(ll n){
    if(n == 1){
        return 1;
    }
    return n*(n-1);
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    map<ll , ll> mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        ll base = (int)log2(a) + 1;
        mp[base] += 1;
    }
    ll ans = 0;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second > 1){    
            ll temp = itr->second;
            temp = fact(temp);

            ll div = fact(itr->second - 2);
            if(div == 0){
                div = 1;
            }
            div *= 2;
            temp = temp / div;
            ans += temp;
            // cout<<temp<<" "<<div<<endl;
        }
    }
    cout<<ans<<endl;
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
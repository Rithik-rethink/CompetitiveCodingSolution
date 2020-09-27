#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, k;
    cin>>n>>k;
    multimap<ll,ll> mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a,b;
        cin>>a>>b;
        mp.insert({a,b}) ;   
    }
    ll s = 0 , e = 0 , res = 0;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        s = max(s,itr->first);
        if(s < e){
            s = e;
        }
        e = itr->second;
        if(e > s){
            ll temp = (e - s) / k;
            temp += 1;
            if((e-s ) % k == 0){
                temp -= 1;
            }
            res += temp;
            s = s + temp*k;
        }
    }
    cout<<res<<endl;



}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}
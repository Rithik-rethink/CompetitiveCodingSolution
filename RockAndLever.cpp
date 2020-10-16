#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;



void solve() {
	//implementation goes here
    lll n;
    cin>>n;
    map<lll ,lll> mp;

    for(int i = 0 ; i < n ; ++i ){
        lll a;
        cin>>a;
        lll temp = (lll)log2(a) + 1;
        mp[temp] += 1;
    }
    lll res = 0;
    for(auto itr = mp.begin() ; itr != mp.end() ; ++itr ){
        if(itr->second > 1){
            ll temp = itr->second * (itr->second - 1);
            temp /= 2;
            res += temp;
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
		solve();
	}
}
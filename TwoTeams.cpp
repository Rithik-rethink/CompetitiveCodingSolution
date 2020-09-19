#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    set<ll> arr;
    map<ll,ll> mp;
    vector<ll> res;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>> a;
        arr.insert(a);
        mp[a] += 1;
    }
    if(n == 1){
        cout<<0<<endl;
        return;
    }
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second != 1)
            res.emplace_back(itr->second);
    }
    if(res.size() == 0){
        cout<<1<<endl;
        return;
    }
    sort(res.begin() , res.end() , greater<ll>());
    ll temp = res[0];
    ll temp2 = arr.size() - 1;
    // cout<<"temp "<<temp<<" temp2 "<<temp2<<endl;
    ll ans1 = min(temp, temp2);
    temp -= 1;
    temp2 += 1 ;
    // cout<<"temp "<<temp<<" temp2 "<<temp2<<endl;

    ll ans2 = min(temp,temp2);
    cout<<max(ans1,ans2)<<endl;

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


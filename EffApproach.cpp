#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    map<ll,ll> mp;
    for(int i = 0 ; i  < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp[a] = i+1;
    }
    ll m;
    cin>>m;
    ll ans = 0 , ans1 = 0;
    for(int i = 0 ; i < m ; ++i ){
        ll b;
        cin>>b;
        ll ind = mp[b];
        ans += ind;
        ll end = n - ind;
        end += 1;
        ans1 += end;
    }
    cout<<ans<<" "<<ans1<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
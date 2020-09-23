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
    vector<ll> arr;
    map<ll ,ll> mp;

    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp[a] = i;    
    }
    ll mini = 0;
    ll ind = n;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second < ind){
            ind = itr->second;
            mini = itr->first;
        }
    }
    cout<<mini<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    map<ll,ll> mp;
    ll a;
    cin>>a;
    arr.emplace_back(a);
    for(int i = 0 ; i < n-1 ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(arr[arr.size() - 1] + a);
        mp[a] = 1;
    }
    ll m;
    cin>>m;
    vector<ll> res;
    // for(int i = 0 ; i < n ; ++i ){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    for(int i = 0 ; i < m ; ++i ){
        ll a;
        cin>>a;
        auto itr = lower_bound(arr.begin() , arr.end() , a);
        ll temp = itr - arr.begin() ; 
        // cout<<temp<<endl;
        res.emplace_back(temp + 1);

    }
    for(auto itr: res){
        cout<<itr<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
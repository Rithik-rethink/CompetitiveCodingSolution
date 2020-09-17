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
    for(int i = 0 ; i < n  ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp[a] += 1;
    }
    sort(arr.begin() , arr.end() );
    vector<ll> arr1;
    map<ll,ll> mp2;
    for(int i = 0 ; i < n-1  ; ++i ){
        ll a;
        cin>>a;
        mp2[a] += 1;
        mp[a]-=1;
        arr1.emplace_back(a);
    }
    for(auto itr = mp.begin() ; itr != mp.end() ; ++itr){
        if(itr->second > 0){
            cout<<itr->first<<endl;
            break;
        }
    }
    vector<ll> arr2;
    for(int i = 0 ; i < n -2 ; ++i ){
        ll a;
        cin>>a;
        mp2[a] -= 1;
        arr2.emplace_back(a);
    }
    for(auto itr = mp2.begin() ; itr!=mp2.end() ; ++itr){
        if(itr->second > 0){
            cout<<itr->first<<endl;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


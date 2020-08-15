#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin >> n;
    map<pair<ll,ll>,ll> arr;
    for(int i = 0 ; i < n ; ++i){
        pair<ll,ll> a;
        cin>>a.first>>a.second;
        arr[a] += 1;
    }
    ll maxi = 0 ;
    for(auto itr = arr.begin() ; itr!=arr.end() ; ++itr){
        if(itr->second > maxi){
            maxi = itr->second;
        }
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
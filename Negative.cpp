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
    multimap<ll,ll , greater<ll>> mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    vector<ll> arr1;
    for(int i = 0 ; i < n ; ++i ) {
        ll a;
        cin>>a;
        arr1.emplace_back(a);
        if(a == 0)
            mp.insert({arr[i] , i});
    }
    ll i = 0;
    auto itr = mp.begin();
    while( n ){
        // cout<<" map "<<itr->first<<" "<<arr1[i]<<endl;
        if(arr1[i] == 1){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<itr->first<<" ";
            ++itr;
        }
        i += 1;
        n-=1;
    }
    cout<<endl;



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


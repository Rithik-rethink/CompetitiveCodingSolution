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
    for(int i = 0 ; i <  n; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    map<ll , ll > sett;
    for(int i = 0 ; i <= n ; ++i ){
        ll temp = (i-1) + arr[i-1]*i;
        sett[temp]++;
    }
    ll res1 = 1 , res2 = 1;
    bool flag = false;
    for(auto itr = sett.begin() ; itr != sett.end() ; itr++ ){
        cout<<itr->first<<" "<<itr->second<<endl;
        if(itr->second == 1){
            res1 = 1;
            flag = true;
        }
        else{
            res2 += itr->second;
        }
    }
    if(flag){
        cout<<res1<<" "<<res2<<endl;
        return;
    }
    cout<<res2<<" "<<res2<<endl;
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
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    ll start = -1 , end = -1;
    ll count = 0;
    bool flag = true;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        if(flag && a == 1){
            start = i;
            flag = false;
        }
        else if(a == 1 && !flag){
            end = i;
        }
        if(a == 1){
            count += 1;
        }
        arr.emplace_back(a);
    }
    // cout<<count<<endl;
    if(count == 1){
        cout<<0<<endl;
        return;
    }
    ll res = 0;
    // cout<<start<<" "<<end<<endl;
    for(int i = start ; i < end ; ++i ){
        if(arr[i] == 0){
            res += 1;
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
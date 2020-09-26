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
    ll res = 0 , cnt1 = 0 , cnt2 = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        if(a % 3 == 0){
            res += 1;
        }
        else if(a % 3 == 1){
            cnt1 += 1;
        }
        else if(a % 3 == 2){
            cnt2 += 1;
        }
    }
    ll mini = min(cnt1,cnt2);
    res += mini;
    // cout<<res<<endl;
    cnt1 -= mini;
    cnt2 -= mini;
    // cout<<cnt1<<" "<<cnt2<<endl;
    res += cnt1/3;
    res += cnt2/3;
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
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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll res = 0 ;
    ll pos = 0;
    for(int i = 0 ; i < n - 1 ; ++i ){
        res += abs(arr[i] - pos) + 1;
        pos = min(arr[i] , arr[i + 1]);
        res += abs(arr[i] - pos) + 1;
    }
    res += abs(arr[n-1] - pos) + 1;
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
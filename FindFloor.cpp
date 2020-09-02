#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll cal(vector<ll> arr , ll a){
    if(arr[arr.size() - 1] <= a){
        return arr[arr.size() - 1];
    } 
    arr.pop_back();
    ll res = cal(arr , a);
    return res;
}

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll k;
    cin>>k;
    ll res = cal(arr , k);
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    solve();
}
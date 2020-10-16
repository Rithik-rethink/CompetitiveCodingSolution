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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp[i] = a;
    }
    vector<ll> res;
    ll maxi = -1;
    for(int i = n-1 ; i >= 0 ; --i ){
        int s = (maxi + 1) - arr[i];
        // cout<<arr[i]<<" and "<<maxi<<endl;
        ll temp = max(0,s);
        res.push_back(temp);
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    for(int i = res.size() - 1 ; i >= 0 ; --i ){
        cout<<res[i];
        cout<<" ";
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
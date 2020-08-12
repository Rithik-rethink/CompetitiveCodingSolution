#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll count = 0;
    for(int i = 1; i < n ;++i){
        if( arr[i] + arr[i-1] < k){
            ll temp = arr[i];
            arr[i] = k - arr[i-1];
            count += abs(arr[i]-temp);
        }
    }
    cout<<count<<endl;
    for(int i = 0 ; i < n ; ++i){
        cout<<arr[i];
        if(i < n-1) {
            cout<<' ';
        }
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i = 0 ; i < n ; ++i){
        if( i + 1 == arr[i]){
            cout<<1;
            if( i < n-1 ){
                cout<<' ';
            }
            continue;
        }
        ll j = i;
        ll sum = 1;
        while( arr[j] != i+1){
            j = arr[j] - 1;
            sum += 1;
        }
        cout<<sum;
        if( i < n-1 ){
            cout<<' ';
        }

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
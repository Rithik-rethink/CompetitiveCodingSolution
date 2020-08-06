#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,o,p;
    cin>>n>>o>>p;
    if( n/p >= o){
        cout<<o<<endl;
        return;
    }
    vector<ll> arr(p-1,0);
    ll i = 0 ;
    o -= n/p;
    
    while(o != 0){
        arr[i] += 1;
        o -= 1;
        if( i == arr.size() - 1){
            i = 0;
            continue;
        }
        i++;
        //cout<<o<<" "<<i<<endl;
    }
    
    cout<<n/p - *max_element(arr.begin(),arr.end())<<endl;
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
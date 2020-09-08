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
    for(int i = 0 ; i < n*n ; ++i ){
        ll a;
        cin>>a;
        if( i < n)
            arr.push_back(a);
    }
    ll res = 0 ;
    ll j = 1 - n;
    ll temp = arr[1] - arr[0] ;
    bool flag = false;
    if(temp == n){
        flag = true;
    }
    for(int i = 1 ; i < n ; ++i ){
        if(temp != (arr[i] - arr[i-1])){
            if(temp == n){
                res += 1;
            }
            else{
                res += 1;
            }
            if(arr[i] - arr[i-1] < 0)
                temp = 1;
            else
            {
                temp = n;
            }
            //cout<<temp<<endl;
            
        }
    }
    if(temp == n){
        res += 1;
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
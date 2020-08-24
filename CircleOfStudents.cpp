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
    ll prev , res;
    vector<ll> arr;
    bool flag = true;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        if( i > 0 && flag ){
            if((a - prev) == 1 || (a - prev) == -1){
                res = a-prev;
                flag = false;
            }
        }
        prev = a;
    }
    if(n == 1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 1 ; i < n ; ++i){
        if((arr[i] - arr[i-1]) != 1 && abs(arr[i] - arr[i-1]) != (n-1) &&(arr[i] - arr[i-1]) != -1){
            cout<<"NO"<<endl;
            return;
        }
    }
    if((arr[n-1] - arr[0]) != 1 && abs(arr[n-1] - arr[0]) != (n-1) && (arr[n-1] - arr[0]) != -1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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
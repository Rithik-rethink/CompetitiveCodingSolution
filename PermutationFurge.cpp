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
    vector<ll> arr ;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    reverse(arr.begin() , arr.end());
    for(int i = 0 ; i < n ; ++i ){
        cout<<arr[i];
        if(i <n-1){
            cout<<" ";
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
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

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
        arr.emplace_back(a);
    }
    if(n == 1){
        cout<<arr[0]<<endl;
        return;
    }
    sort(arr.begin() , arr.end() , greater<ll>() );
    ll c1 = 0 , c2 = 0;
    c1 = arr[0];
    ll i = 1;
    while( i < n){
        if(c2 <= c1){
            c2 += arr[i];
        }
        else{
            c1 += arr[i];
        }
        i++;
    }
    cout<<max(c1,c2)<<endl;

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
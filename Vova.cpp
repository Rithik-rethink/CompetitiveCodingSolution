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
    vector<ll> arr , res ;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll max = *max_element(arr.begin() , arr.end());
    res.push_back(*max_element(arr.begin() , arr.end()));
    for(int i = 0 ; i < n ;++i ){
        if(arr[i] != max){
            ll temp = __gcd(max, arr[i]);
            if(res.size() == 1){
                res.push_back(arr[i]);
                continue;
            }
            ll cmp = __gcd(res[1] , max);
            //cout<<arr[i]<<" with "<<temp<<" and "<<res[1]<<" with "<<cmp<<endl;
            if(cmp <= temp){
                res.insert(res.begin() + 1 , arr[i]);
            }
            else{
                res.push_back(arr[i]);
            }
        }
    }
    for(int i = 0 ; i <res.size() ; ++i){
        cout<<res[i];
        if(i < res.size() - 1){
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
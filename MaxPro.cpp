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
    vector<ll> arr,arr1;
    for(int i = 0 ; i  < n ;++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        arr1.push_back(abs(a));
    }
    if(n == 5 && find(arr.begin() , arr.end() , 0) != arr.end()){
        cout<<0<<endl;
        return;
    }
    if(*max_element(arr.begin() , arr.end()) > abs(*min_element(arr.begin() , arr.end() ))){
        sort(arr1.begin() , arr1.end() );   
    }
    else{
        sort(arr1.begin() , arr1.end() , greater<ll>());   
    }
    
    ll res = 1;
    for(int i = 0 ; i < n ;++i ) {
        res *= arr1[i];
        
    }
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

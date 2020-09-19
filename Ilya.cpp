#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    vector<ll> arr;
    ll k = 0;
    for(int i = 1 ; i < s.size() ; ++i ){
        if(s[i] == s[i-1]){
            k += 1;
        }
        arr.emplace_back(k);
    }
    ll n ;
    cin>>n;
    for(int i = 0 ; i < n ; ++i ){
        ll l , r;
        cin>>l>>r;
        if(l == 1){
            cout<<arr[r-2]<<endl;

        }
        else{
            cout<<abs(arr[r-2] - arr[l-2])<<endl;
        }
    }   
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


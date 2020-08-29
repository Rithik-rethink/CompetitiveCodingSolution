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
    ll n;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < 26 ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll res = 0;
    for( int i = 0 ; i < s.size() ; ++i ){
        res += (i+1) * arr[s[i] - 'a'];
    }
    ll k = s.size() + 1;
    ll temp = *max_element(arr.begin() , arr.end());
    for(int i = 1; i<= n ; ++i){
        res += k * temp;
        k += 1;

    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    vector<string> s;
    map<ll , ll> mp;
    vector<ll> arr;
    for(int i = 0 ; i < n*n ;++i){
        string a;
        cin>>a;
        s.emplace_back(a);
        if(i < n){
            stringstream x(a);
            ll temp ;
            x>>temp;
            mp[i] = temp;
            arr.emplace_back(i);
        }
        else if( i % n == 0 ){
            stringstream x(a);
            ll temp ;
            x>>temp;
            mp[i] = temp;
        }
    }
    ll k = 0;

    for(int i = n + 1 ; i < n * n ; ++i ){
        if(i % n == 0){
            arr.pop_back();
            arr.insert(arr.begin() + 0 , i-n);
            k = 0;
            continue;
        }
        stringstream x(s[i]);
        ll temp ;
        x>>temp;
        mp[arr[k]] += temp;
        k += 1;
    }
    ll maxi = 0;
    for(auto itr = mp.begin() ; itr != mp.end() ; ++itr ){
        if(itr->second > maxi){
            maxi = itr->second;
        }
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}
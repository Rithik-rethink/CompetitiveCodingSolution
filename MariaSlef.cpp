#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    set<ll> sett;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
        sett.insert(a);
    }
    ll granny = 1;
    ll r = 0;
    for(auto itr = sett.begin() ;itr != sett.end() ; ++itr){
        //cout<<*itr<<endl;
        ll temp = count(arr.begin(),arr.end() , *itr) + r - 1;
        //cout<<" granny = "<<granny<<" and "<<temp<<" r "<<r<<endl;
        if( granny + temp < *itr){
            r += count(arr.begin(),arr.end(),*itr);
            
        }
        else{
            granny += temp + 1;
            r = 0;
        }
    }
    cout<<granny<<endl;
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








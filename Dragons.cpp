#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll s ,n;
    cin>>s>>n;
    multimap<ll,ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a,b;
        cin>>a>>b;
        arr.insert({a,b});
    }
    for(auto itr = arr.begin() ; itr!=arr.end() ; ++itr){
        //cout<<itr->first<<" "<<itr->second<<" ";
        if(itr->first >= s){
            cout<<"NO"<<endl;
            return;
        }
        s += itr->second;
        //cout<<s<<endl;
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
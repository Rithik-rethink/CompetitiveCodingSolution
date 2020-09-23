#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n;
    map<ll ,ll > mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a , b;
        cin>>a>>b;
        mp[a] = b; 
    }
    cin>>m;
    for(int i = 0 ; i < m ; ++i ){
        ll a, b;
        cin>>a>>b;
        if(mp.find(a) != mp.end()){
            auto itr = mp.find(a);
            itr->second = max(itr->second , b);
        }
        else{
            mp[a] = b;
        }
    }
    ll sum = 0;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        // cout<<itr->first<<" "<<itr->second<<endl;
        sum += itr->second;
    }
    cout<<sum<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
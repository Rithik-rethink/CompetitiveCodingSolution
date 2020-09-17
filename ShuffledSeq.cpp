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
    map<ll, ll> mp;
    bool flag = false;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        mp[a] += 1;
        if(mp[a] > 2){
            flag = true;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<mp.size()<<endl;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        cout<<itr->first;
        itr->second -= 1;
        if(itr!= mp.end()){

            cout<<" ";
        }
    }
    cout<<endl;
    cout<<n - mp.size()<<endl;
    for(auto itr = mp.rbegin() ; itr!= mp.rend() ; ++itr){
        if(itr->second == 1){
            cout<<itr->first;
            if(itr != mp.rend()){
                cout<<" ";
            }
        }
    }
    cout<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
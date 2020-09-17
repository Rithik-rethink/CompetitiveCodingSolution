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
    vector<ll> arr;
    map<ll,ll> mp;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        mp[a] += 1;
    }
    ll count = 0;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second == 1){
            count += 1;
        }
    }
    if(count % 2 != 0){
        cout<<"NO"<<endl;
        return; 
    }
    
    cout<<"YES"<<endl;
    count /= 2;
    string res = "";
    for(int i = 0 ; i < n ;++i){
        if(count > 0){
            res += "A";
            if( mp[arr[i]] == 1){
                count -= 1;
            }
        }
        else{
            res += "B";
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

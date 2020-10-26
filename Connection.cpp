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
    vector<ll> arr;
    set<ll> st;
    map<ll , ll> mp , mp1;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        st.insert(a);
        mp[a] += 1;
        mp1[a] = i;
    }
    if(st.size() == 1){
        cout<<"NO"<<endl;
        return;
    }
    ll mini  = -1;
    ll mini2 = mini;
    ll x = 1e9+ 7;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        // cout<<itr->second<<endl;
        if(itr->second < x){
            mini2 = mini;
            mini = itr->first;
            x = itr->second;
        }
    }
    // cout<<mini<<" "<<mini2<<endl;
    ll ind = mp1[mini];
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->first != mini){
            mini2 = itr->first;
        }
    }
    ll ind2 = mp1[mini2];
    cout<<"YES"<<endl;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] != mini){
            cout<<i+1<<" "<<ind+1<<endl;
        }
        else if(arr[i] == mini && i != ind){
            cout<<i+1<<" "<<ind2+1<<endl;
        }
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
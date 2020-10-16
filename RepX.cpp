#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    vector<ll> arr1 , arr;
    map<ll,ll> mp,mp1;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        mp1[a] = 1;
        mp[a] = i;
    }
    arr1 = arr;
    map<ll,ll> mp2;
    sort(arr1.begin() , arr1.end());
    for(int i = 0 ; i < n ; ++i ){
        mp2[arr1[i]] = i;
    }
    ll i = 0;
    if(mp1[x] != 1 ){
        arr1[k-1] = x;
        sort(arr1.begin() , arr1.end());
        for(int i = 0 ; i < n ; ++i ){
            mp2[arr1[i]] = i;
        }
        i += 1;
    }
    if(mp2[x] == p-1){
        cout<<i<<endl;
        return;
    }
    else if(mp2[x] == k-1){
        cout<<-1<<endl;
        return;
    }
    if(p-1 > mp2[x] && (k-1 < mp2[x] || k-1 < p-1)){
        cout<<-1<<endl;
        return;
    }
    else if(p-1 < mp2[x] && (k-1 >mp2[x] || k-1 > p-1)){
        cout<<-1<<endl;
        return;
    }
    
    // cout<<mp2[x]<<" "<<x<<" "<<p-1<<endl;
    if(count(arr1.begin(),arr1.end() , x) == 1){
        // cout<<p-1<<" "<<mp2[x]<<endl;
        cout<<abs((p-1) - mp2[x]) + i<<endl;
        return;
    }
    ll ind = mp[arr1[p-1]];
    ll res = 9999999999;
    for(int i = 0 ; i < n ; ++i ){
        if(arr[i] == x){
            ll temp = abs(ind - i);
            if(temp < res){
                res = temp;
            }
        }
    }
    cout<<res + i<<endl;

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
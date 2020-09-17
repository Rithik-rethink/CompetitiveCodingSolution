#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    k -= 2;
    map<ll , ll> mp;
    ll res = k;
    while(k != 0){
        if(arr[0] > arr[1]){
            mp[arr[0]] += 1;
            ll temp = arr[1];
            arr.erase(arr.begin() + 1);
            arr.push_back(temp);
            if(mp[arr[0]] == res){
                cout<<arr[0]<<endl;
                return;
            }
        }
        else{
            mp[arr[1]] += 1;
            ll temp = arr[0];
            arr.erase(arr.begin() + 0);
            arr.push_back(temp);
            if(mp[arr[0]] == res){
                cout<<arr[0]<<endl;
                return;
            }
        }

        k -= 1;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
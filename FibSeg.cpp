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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    ll res = -1;
    if(arr.size() == 1){
        cout<<1<<endl;
        return;
    }
    
    ll maxi = 0;
    for(int i = 2 ; i < n ; ++i ){
        ll temp = arr[i-1] + arr[i-2];
        if(temp == arr[i]){
            if(res == -1){
                res = 3;
            }
            else{
                res += 1;
            }
        }
        else{
            if(res > maxi){
                maxi = res;
            }
            res = -1;
        }
    }
    // cout<<res<<endl;
    if(res > maxi){
        maxi = res;
    }
    if(maxi == 0 && n >=2 ){
        cout<<2<<endl;
        return;
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
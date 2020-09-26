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
    for(int i = 0 ; i < n - 1 ; ++i ){
        ll temp = arr[i] % 2;
        if(temp & 1){
            arr[i + 1] -=1;
            if(arr[i+1] < 0){
                cout<<"NO"<<endl;
                return;
            }
        }
        // cout<<arr[i]<<" "<<arr[i+1]<<endl;
    }
    if(arr[n-1] & 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
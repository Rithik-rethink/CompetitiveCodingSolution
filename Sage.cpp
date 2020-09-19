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
    if( n < 3){
        cout<<0<<endl;
        for(int i = 0 ; i < n ; ++i ){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    sort(arr.begin() , arr.end());
    ll buy = 1;
    swap(arr[0] , arr[2]);
    for(int i = 1 ; i < n - 1 ; ++i ){
        if(arr[i] < arr[i+1] && arr[i] < arr[i-1]){
            buy += 1;
            continue;
        }
        swap(arr[i],arr[i+1]);
    }
    cout<<buy<<endl;
    for(int i = 0 ; i < n ; ++i ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
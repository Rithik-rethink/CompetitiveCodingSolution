#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    
    vector<ll> arr;
    for(int i = 0 ; i <  n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i = n-1; i >= 0 ; --i){
        ll a = sqrt(arr[i]);
        if(a - sqrt(arr[i]) != 0){
            cout<<arr[i]<<endl;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
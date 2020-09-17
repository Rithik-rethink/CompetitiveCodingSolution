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
    ll maxi = 0;
    ll ind ;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        if(a >= maxi){
            ind = i;
        }
    }
    ll sum = arr[ind];
    ll prev = arr[ind];
    for(int i = ind - 1; i >= 0 ; --i ){
        if(prev == 0){
            break;
        }
        else if(arr[i] >= prev){
            sum += (prev - 1);
            prev -= 1;
        }
        else{
            sum += arr[i];
            prev = arr[i];
        }
        // cout<<sum<<" "<<prev<<endl;
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
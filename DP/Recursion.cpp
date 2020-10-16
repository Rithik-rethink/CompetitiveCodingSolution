#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

vector<ll> enter(ll temp , vector<ll> arr){
    if(arr[arr.size() - 1] <= temp){
        arr.emplace_back(temp);
        return arr;
    }
    ll n = arr.size() - 1;
    ll temp = arr[arr.size() - 1];
    arr.erase(arr.begin() + n);
    arr = enter(temp , arr);
    arr.emplace_back(temp);
    return arr;
}

vector<ll> print(vector<ll> arr){
    if(arr.size() == 0){
        return arr;
    }
    ll temp = arr[0];
    arr.erase(arr.begin() + 0);
    arr = enter(temp , arr);
    return arr;
    
}

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    print(arr);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
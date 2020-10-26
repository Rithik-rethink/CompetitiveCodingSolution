#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

vector<ll> r;
ll mod = 1e9 + 7;
void rec(vector<ll> arr , ll prod, ll k , ll prev , ll dest){
    if(arr.size() == 1){
        if(abs(prev - arr[0]) <= k){
            r.emplace_back(prod);
        }
        return;
    }
    if(abs(prev - arr[0]) > k){
        arr.erase(arr.begin() + 0);
        rec(arr , prod , k , prev, dest);
    }
    else{
        ll temp1 = arr[0];
        arr.erase(arr.begin() + 0);
        rec(arr , prod , k , prev , dest);
        prod *= temp1;
        prod = prod % mod;
        prev = temp1;
        rec(arr, prod , k , prev , dest);
    }
    return;
}
void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    if(abs(arr[0] - arr[arr.size() - 1]) <= k){
        r.emplace_back(arr[0] * arr[arr.size() - 1]);
    }
    ll dest = arr[0];
    reverse(arr.begin() , arr.end());
    ll prod = arr[0];
    ll prev = arr[0];
    arr.erase(arr.begin() + 0);
    rec(arr , prod , k , prev , dest);
    cout<<*min_element(r.begin() , r.end())<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
vector<ll> input(vector<ll> arr , ll n){
    ll a;
    if(n == 1){
        cin>>a;
        arr.push_back(a);
        return arr;
    }
    arr = input(arr,n-1);
    cin>>a;
    arr.push_back(a);
    return arr;
}
vector<ll> insert(vector<ll> arr , ll val){
    if(arr.size() == 0 || arr[arr.size() - 1] <= val){
        arr.push_back(val);
        return arr;
    }
    ll r = arr[arr.size() - 1];
    arr.pop_back();
    arr = insert(arr,val);
    arr.push_back(r);
    return arr;
}
vector<ll> sort(vector<ll> arr){
    if(arr.size() == 1){
        return arr;
    }
    ll val = arr[arr.size() - 1];
    arr.pop_back();
    arr = sort(arr);
    arr = insert(arr,val);
    return arr;

}
void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    arr = input(arr,n);
    arr = sort(arr);
    for(int i = 0 ; i < n ; ++i){
        cout<<arr[i]<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
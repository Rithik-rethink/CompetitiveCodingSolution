#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

vector<ll> insert(vector<ll> arr , ll temp){
    if(arr.size() == 0 || arr[arr.size() - 1] <= temp ){
        arr.emplace_back(temp);
        return arr;
    }
    ll r = arr[arr.size() - 1];
    arr.pop_back();
    arr = insert(arr , temp);
    arr.emplace_back(r);
    return arr;

}
vector<ll> sort(vector<ll> arr){
    if(arr.size() == 1){
        return arr;
    }
    ll temp = arr[arr.size() - 1];
    arr.pop_back();
    arr = sort(arr);
    arr = insert(arr,temp);
    return arr;
}

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
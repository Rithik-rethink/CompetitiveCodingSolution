#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n>>m;
    vector<ll> arr,res;
    ll prev ;
    ll a ;
    cin>>a;
    arr.emplace_back(a);
    prev = a;
    for(int i = 1 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    sort(arr.begin() , arr.end());
    for(int i = 1 ; i < n ; ++i ){
        res.emplace_back(arr[i] - arr[i-1]);
    }

    float maxi = 0;
    if(res.size() != 0){
        maxi = *max_element(res.begin() , res.end());
    }
    float first = arr[0] - 0;
    float last = m - arr[arr.size() - 1];
    maxi = maxi/2;
    if(maxi < first || maxi < last){
        cout<<setprecision(10)<<max(first,last)<<endl;
        return;
    }
    cout<<setprecision(10)<<maxi<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
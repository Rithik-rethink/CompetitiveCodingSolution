#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k , m;
    cin>>n>>k>>m;
    vector<ll> arr;
    for(int i = 0 ; i < n ;++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin() , arr.end() , greater<ll>());
    ll temp = m + 1;
    ll q = k / temp;
    ll big = arr[0] * m;

    ll sm = arr[1];
    big *= q;
    sm *= q;
    // cout<<big<<" "<<sm<<" "<<temp<<endl;
    if(k % temp != 0){
        ll rem = k % temp;
        //cout<<rem<<" "<<arr[0] * rem<<endl;
        big += (arr[0]*rem);
    }
    // cout<<big<<" "<<sm<<" "<<temp<<endl;

    cout<<big + sm<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    ll sum = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        sum += a;
        arr.emplace_back(a);
    }
    
    n += 1;
    ll res = 0;
    for(int i = 1 ; i <= 5 ; ++i ){
        sum += i;
        if((sum%n) != 1){
            res += 1;
        }
        sum -= i;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
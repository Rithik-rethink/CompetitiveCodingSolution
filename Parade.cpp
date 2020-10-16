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
    vector<pair<ll,ll>> arr;
    ll l = 0 , r = 0 , res = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll a, b;
        cin>>a>>b;
        pair<ll,ll> p;
        p.first = a;
        p.second = b;
        l += a;
        r += b;
        arr.emplace_back(p);
    }
    res = abs(l - r);
    ll ans = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll L = l , R = r;
        L -= arr[i].first;
        L += arr[i].second;
        R -= arr[i].second;
        R += arr[i].first;
        ll temp = abs(L - R);
        if(temp > res){
            res = temp;
            ans = i + 1;
        }
    }
    cout<<ans<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
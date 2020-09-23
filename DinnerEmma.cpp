#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m;
    cin>>n>>m;
    vector<ll> arr , res;
    for(int i = 1 ; i <= n*m ; ++i ){
        ll a ;
        cin>>a;
        arr.emplace_back(a);
        if(i % m == 0){
            res.emplace_back(*min_element(arr.begin() , arr.end()));
            arr.clear();
        }
    }
    cout<<*max_element(res.begin() , res.end())<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
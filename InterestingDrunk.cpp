#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

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
    sort(arr.begin() , arr.end());
    ll m;
    cin>>m;
    for(int i = 0 ; i < m ; ++i ){
        ll a;
        cin>>a;
        if(a >= arr[n-1]){
            cout<<n<<endl;
            continue;
        }
        
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


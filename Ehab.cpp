#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    set<ll> arr;
    for(int i = 0 ; i < n ;++i){
        ll a;
        cin>>a;
        if(a != 0)
            arr.insert(a);
    }
    auto itr = arr.begin();
    ll sum = 0;
    for(auto itr = arr.begin() ; itr!=arr.end() ; ++itr){
        if( k == 0){
            break;
        }
        cout<<*itr - sum<<endl;
        sum += (*itr - sum);
        k-=1; 
    }
    while(k){
        cout<<0<<endl;
        k-=1;
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}

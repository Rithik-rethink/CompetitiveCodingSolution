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
    set<ll> arr;
    for(int i = 0 ; i < n ;++i){
        ll a;
        cin>>a;
        arr.insert(a);
    }
    auto itr = arr.begin() ; 

    if(*itr == 1){
        cout<<1<<endl;
        return;
    }
    ll temp = *itr;
    for(auto i = arr.begin() ; i != arr.end() ; ++i ){
        if(*i % temp != 0){
            cout<<-1<<endl;
            return;
        }

    }
    cout<<temp<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
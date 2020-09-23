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
    ll b;
    cin>>b;
    if(b != 0 ){
        cout<<1<<endl;
        return;
    }
    arr.emplace_back(b);
    ll maxi = 0;
    for(int i = 1 ; i < n ; ++i ){
        ll a;
        cin>>a;
        
        if(a > maxi + 1){
            cout<<i+1<<endl;
            return;
        }
        if(a > maxi){
            maxi = a;
        }
    }
    cout<<-1<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
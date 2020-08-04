#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    ll xvector = 0,yvector = 0 , zvector = 0;
    for(int i = 0 ; i < n ; ++i){
        ll x,y,z;
        cin>>x>>y>>z;
        xvector += x;
        yvector += y;
        zvector += z;
    }
    if(xvector != 0 || yvector != 0 || zvector != 0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
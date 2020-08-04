#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll a,b,c;
    cin>>a>>b>>c;
    ll l,w;
    if(a % c != 0){
        l = a / c + 1;
    }
    else{
        l = a /c;
    }
    if( b % c != 0 ) {
        w = b / c + 1;
    }
    else { 
        w = b / c;
    }
    cout<<l*w<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
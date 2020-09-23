#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n>>m;
    ll half;
    if(m & 1){
        m += 1;
        half = m/2;
        m -= 1;
    }
    else{
        half = m/2 + 1;
    }
    if( m <= n ){
        cout<<m - half<<endl;
        return;
    }
    ll ways = n - half + 1;
    if(ways < 0){
        cout<<0<<endl;
    }
    else{
        cout<<ways<<endl;
    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
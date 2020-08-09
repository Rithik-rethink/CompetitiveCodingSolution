#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m,p1=0,p2=0;
    cin>>n>>m;
    if(n <= 9){
        p1 = 1;
    }
    else{
        p1 += n / 9;
        if( n % 9 != 0){
            p1 += 1;
        }
    }
    if(m <= 9){
        p2 = 1;
    }
    else{
        p2 += m / 9;
        if( m % 9 != 0){
            p2 += 1;
        }
    }
    if(p1 >= p2){
        cout<<1<<' '<<p2<<endl;
    }
    else if( p1 < p2){
        cout<<0<<' '<<p1<<endl;
    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll temp = 2 * min(e,c);
    ll r = f - a;
    a = abs( a - f );
    //cout<<temp<<endl;
    if(r > 0){
        if(b > 0)
            temp -= r * 2;
        else if(c > 0){
            temp -= 0;
        }
    }
    cout<<temp<<endl;

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
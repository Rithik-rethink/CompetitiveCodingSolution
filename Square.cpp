#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes bacl
    ll a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(a+c == d && b == d){
        cout<<"YES"<<endl;
        return;
    }
    else if(a+d == c && b == c){
        cout<<"YES"<<endl;
        return;
    }
    else if(b+c == d && a == d){
        cout<<"YES"<<endl;
        return;
    }
    else if(b+d == c && a == c){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
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
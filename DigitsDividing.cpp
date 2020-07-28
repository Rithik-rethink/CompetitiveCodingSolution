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
    string s;
    cin>>s;
    if(n == 2 && s[1] - '0' <= s[0] - '0'){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<2<<endl;
    cout<<s[0]<<" "<<s.substr(1)<<endl;
    
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
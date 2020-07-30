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
    ll rem = n / 4;
    if(n%4 != 0){
        rem+=1;
    }
    ll nine = n - rem;
    string s = "";
    for(int i = 0 ; i < nine ; ++i){
        s += '9';
    }
    for(int i = 0 ; i < rem ; ++i){
        s += '8';
    }
    cout<<s<<endl;


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
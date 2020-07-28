#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    string s;
    cin>>s;
    n = s.size();
    ll ways = (n+1) * 26;
    ways -= n;
    cout<<ways<<endl;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
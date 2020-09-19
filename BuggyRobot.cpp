#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll uc = count(s.begin() , s.end() , 'U');
    ll dc = count(s.begin() , s.end() , 'D');
    ll lc = count(s.begin() , s.end() , 'L');
    ll rc = count(s.begin() , s.end() , 'R');
    ll res = 0;
    res += 2 * min(uc,dc);
    res += 2 * min(lc,rc);
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


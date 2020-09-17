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
    ll res = 0;
    for(int i = 0 ; i  < n ; ++i ){
        ll temp = s[i] - '0';
        if(temp % 2 == 0){
            res += 1 + i;
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
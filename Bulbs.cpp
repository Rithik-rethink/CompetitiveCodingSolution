#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll cut = 0;
    bool flag = true;
    for(int i = 0 ; i < n ; ++i ){
        if(s[i] == '0' && i == 0 && flag){
            flag = false;
        }
        else if(s[i] == '0' && i > 0 && flag){
            cut += 1;
            flag = false;
        }
        else if(s[i] != '0' && !flag){
            cut += 1;
            flag = true;
        }
        // cout<<cut<<" "<<i<<endl;
    }
    // cout<<cut<<endl;
    if(cut <= k){
        cout<<0<<endl;
        return;
    }
    cout<<abs(cut - k)<<endl;
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
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    ll a = count(s.begin(),s.end(),'0');
    ll b = count(s.begin(),s.end(),'1');
    if(a == 1 || b == 1){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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
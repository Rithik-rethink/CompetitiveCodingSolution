#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll i = 0 , j = s.size() - 1;
    while( i <= j){
        ll a = int(s[i]);
        ll b = int(s[j]);
        if(abs(a - b) > 2 || abs(a-b) == 1){
            cout<<"NO"<<endl;
            return;
        }
        i+=1;
        j-=1;
    }
    cout<<"YES"<<endl;
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
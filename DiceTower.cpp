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
    ll temp = n % 14;
    temp += 14;
    if( n < 15){
        cout<<"NO"<<endl;
        return;
    }
    if(temp >= 15 && temp <= 20){
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


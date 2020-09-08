#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m ;
    cin>>n>>m;
    if(abs(n-m) > 1 || (n == 0 && m == 0)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
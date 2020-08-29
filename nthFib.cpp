#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll findfib(ll n){
    if(n == 0 || n == 1){
        return 1;
    }
    return findfib(n-1) + findfib(n-2);
}
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll ans = findfib(n);
    cout<<ans<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
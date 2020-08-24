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
    if(n == 0){
        cout<<0<<endl;
        return;
    }
    string res = "" ;
    while( n != 0){
        res += to_string(n % 2);
        n/=2;
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
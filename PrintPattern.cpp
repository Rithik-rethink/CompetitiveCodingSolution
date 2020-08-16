#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll count = 0 ,row = 1;
    for(int i = 1; i <= n ;++i){
        cout<<i;
        count += 1;
        if(count == row && row < n){
            cout<<endl;
            count = 0;
            row += 1;
        }

    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
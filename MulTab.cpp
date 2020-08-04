#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m;
    cin>>n>>m;
    ll sum = 0;
    for(int i = 1; i <= n ; ++i){
        if(m % i == 0){
            if(m / i <= n){
                sum += 1;
            }
        }
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
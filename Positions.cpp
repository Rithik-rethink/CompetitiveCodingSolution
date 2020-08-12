#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,a,b;
    cin>>n>>a>>b;
    ll temp = a+b;
    if(temp > n){
        b = n - a;
    }
    else if(temp<n){
        cout<<b+1<<endl;
        return;
    }
    if(n-a == 0){
        cout<<1<<endl;
        return;
    }
    
    cout<<n-a<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
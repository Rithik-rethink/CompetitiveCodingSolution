#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    if( n == 0){
        cout<<1<<endl;
        return;
    }
    if( n % 4 == 1){
        cout<<8<<endl;
    }
    else if( n % 4 == 2){
        cout<<4<<endl;
    }
    else if( n % 4 == 3){
        cout<<2<<endl;
    }
    else if(n % 4 == 0){
        cout<<6<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    ll sum = 0,used = 0;
    while( n != 0 ){
        n-=1;
        used += 1;
        sum += 1;
        if(used == m){
            n+=1;
            used = 0;
        }
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
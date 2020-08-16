#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m;
    cin>>n>>m;
    ll maxi = 0,res;
    for(int i = 1 ; i <= n ; ++i){
        ll a;
        cin>>a;
        ll temp = a / m;
        if(a % m != 0){
            temp += 1;
        }
        if(temp >= maxi){
            res = i;
            maxi = temp;
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
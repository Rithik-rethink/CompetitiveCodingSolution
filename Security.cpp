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
    float sq = sqrt(n);
    ll s = int(sq);
    if(sq - s != 0){
        s += 1;
    }
    ll q = n / s;
    ll res = s + q*2;
    ll rem = n - (q * s);
    if(rem != 0){
        res += rem;
        res += 2;
        res += (s - rem);
    }
    else{
        res += s;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
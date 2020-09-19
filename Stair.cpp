#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    ll sum = 1;
    ll i  = 3;
    ll temp = 0;
    while(n){
        temp = i * i;
        ll ex = temp - i;
        ex /= 2;
        temp = temp - ex;
        if(temp < n){
            sum += 1;
            n -= temp;
        }
        else{
            break;
        }
        i = (i * 2) + 1;
        // cout<<'h';
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}


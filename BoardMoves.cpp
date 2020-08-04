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
    
    if(n % 2 != 0){
        ll temp = (n-1) / 2;
        temp = temp *8;
        ll i = 1;
        ll j = 8;
        ll sum = 0;
        while(j <= temp){
            sum += j * i;
            j += 8;
            i+=1;
        }
        cout<<sum<<endl;
        return;
    }
    else { 
        ll temp = n;
        n -= 1;
        ll temp1 = (n-1) / 2;
        temp1 = temp1 *8;
        ll i = 1;
        ll j = 8;
        ll sum = 0;
        while(j <= temp1){
            sum += j * i;
            j += 8;
            i+=1;
        }
        temp = temp + (temp - 1);
        sum += temp * i;
        cout<<sum<<endl;
    }
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
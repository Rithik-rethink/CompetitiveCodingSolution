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
    if(n % 3 == 0 || n % 7 == 0){
        cout<<"YES"<<endl;
        return;
    }
    ll temp = n/7;
    for(int i = 0 ; i < temp;i++){
        n-=7;
        if(n % 3 == 0){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
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
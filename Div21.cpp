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
    ll sum = 30;
    if(n <= 30){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    ll temp = n - sum;
    if(temp == 6 || temp == 10 || temp == 14){
        temp = n -(6+10+15);
        cout<<6<<" "<<10<<" "<<15<<" "<<temp<<endl;
        return;
    }
    cout<<6<<" "<<10<<" "<<14<<" "<< n - sum<<endl;
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
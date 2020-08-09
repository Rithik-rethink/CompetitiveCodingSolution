#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll h,p;
    cin>>h>>p;
    while(p!=0){
        h -= p;
        if(h <=0){
            cout<<"1"<<endl;
            return;
        }
        p/=2;
    }
    if(h<=0){
        cout<<'1'<<endl;
        return;
    }
    cout<<0<<endl;
    
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
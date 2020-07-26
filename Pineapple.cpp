#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll t,s,r;
    cin>>t>>s>>r;
    if(r == t){
        cout<<"YES"<<endl;
        return;
    }
    t += s;

    while(t <= r){
        if(r == t || r == t+1){
            cout<<"YES"<<endl;
            return;
        }
        t+=s;
    }
    cout<<"NO"<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
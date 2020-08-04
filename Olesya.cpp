#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,k;
    cin>>n>>k;
    string s = "";
    if(k == 10){
        if(n == 1){
            cout<<-1<<endl;
            return;
        }
        s = '1';
        for(int i = 0 ; i < n-1 ; ++i){
            s += '0';
        }
        cout<<s<<endl;
        return;
    }
    for(int i = 0 ; i < n ; ++i){
        s += to_string(k);
    }
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
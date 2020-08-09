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
    if(n == 1){
        cout<<-1<<endl;
        return;
    }
    string s = "";
    for(int i = 1; i < n ; i++){
        s += "9";
    }
    s += "7";
    stringstream x(s);
    ll f ;
    x >> f;
    if(f % 7 == 0){
        s.pop_back();
        s += "4";
    }
    cout<<s<<endl;

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
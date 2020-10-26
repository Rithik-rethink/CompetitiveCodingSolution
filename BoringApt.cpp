#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll temp = n % 10;
    temp -= 1;
    if(temp == 0){
        string s = to_string(n);
        temp = s.size();
        temp = temp*(temp+1);
        temp/=2;
        cout<<temp<<endl;
        return;
    }
    ll res = temp * 10;
    string s = to_string(n);
    temp = s.size();
    temp = temp*(temp+1);
    temp/=2;
    res += temp;
    cout<<res<<endl;
    
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
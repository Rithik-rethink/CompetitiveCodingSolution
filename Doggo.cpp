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
    string s;
    cin>>s;
    if(n == 1){
        cout<<"YES"<<endl;
        return;
    }
    sort(s.begin(),s.end());
    for(int i = 0 ; i < n-1 ; ++i){
        if(s[i] == s[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
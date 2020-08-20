#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    ll count = 0;
    for(int i = 0 ; i < s.size() ; ++i){
        if((s[i] - '0') % 2 == 0){
            count += 1;
        }
    }
    cout<<count;
    for(int i = 1 ; i < s.size() ; ++i){
        if(s[i-1] % 2 == 0){
            count -= 1;
        }
        cout<<" "<<count;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
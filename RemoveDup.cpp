#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    
    for(int i = 0 ; i < s.size() ; ++i){
        if( i > 0 && s[i] == s[i-1]){
            continue;
        }
        cout<<s[i];
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
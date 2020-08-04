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
    string s = "codeforces";    
    bool flag = true;
    for(int i = 1 ; i < n ; ++i){
        if(flag){
            s = 'c' + s;
            flag = false;
        }
        else{
            s += 's';
            flag = true;
        }
    }
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    string s;
    cin>>s;
    ll N = 2 * s.size();
    string res = "";
    ll i = 0 ;
    bool flag =true;
    while( i >= 0){
        res += s[i];
        if( i == s.size()-1 ){
            res += s[i];
            flag = false;
        }
        if(flag){
            i += 1;
        }
        else{
            i-=1;
        }
    }
    cout<<res<<endl; 
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
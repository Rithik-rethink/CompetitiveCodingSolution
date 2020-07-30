#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
string repeat(char a,ll b){
    string res = "";
    for(int j = 0 ; j < b ; ++j){
        res += a;
    }
    return res;
}
void solve() {
	//implentation goes here
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ll n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cout<<repeat(s[i],i+1)<<endl;
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
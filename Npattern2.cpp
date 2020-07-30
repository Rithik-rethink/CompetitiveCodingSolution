#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
string repeat(ll n){
    string s = "";
    for(int j = 0 ; j < n ; j++){
        s += '2';
    }
    return s;
}
void solve() {
	//implentation goes here

    ll n;
    cin>>n;
    cout<<1<<endl;
    
    for(int i =1 ; i < n ;++i){
        cout<<1;
        cout<<repeat(i-1);
        cout<<1<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
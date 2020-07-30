#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
string make(ll a){
    string o = "";
    for(int i= 1 ; i <= a ; i++){
        o += to_string(i);
    }
    return o;
}
void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    
    while(n > 0){
        cout<<make(n)<<endl;
        n-=1;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll findprime(ll n){
    ll i = 2 ;
    while( i*i <= n){
        if( n % i == 0){
            return false;
        }
        i += 1;
    }
    return true;
}
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    for(int i = 2;  i <= n ; ++i){
        if(findprime(i)){
            cout<<i<<endl;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
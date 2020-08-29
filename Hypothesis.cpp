#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
bool check(ll n){
    ll i = 2;
    if(n == 1 || n== 2){
        return false;
    }
    while(i*i <= n){
        if(n % i == 0){
            return true;
        }
        i+=1;
    }
    return false;
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll j = 1;
    while(1){
        ll temp = (n * j) + 1;
        if(check(temp)){
            cout<<j<<endl;
            return;
        }
        j+=1;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
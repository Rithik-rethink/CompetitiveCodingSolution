#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll a = 1;
    if(n == 1 || n == 2){
        cout<<"true"<<endl;
        return;
    }
    ll prev = 1 , prev2 = 1;
    for(int i = 3; i <= n + 10 ;++i){
        a = prev + prev2;
        if(a == n){
            cout<<"true"<<endl;
            return;
        }
        prev = prev2;
        prev2 = a;
    }
    
    cout<<"false"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
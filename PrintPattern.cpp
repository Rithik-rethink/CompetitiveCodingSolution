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
    ll count = 0 ,row = 2;
    cout<<1<<endl;
    ll i = 2;
    ll p = 0;
    while(row<=n){
        cout<<i;
        count += 1;
        if(count == row){
            cout<<endl;
            count = 0;
            row += 1;
            i-=p;
            p+=1;
            continue;
        }
        i+= 1;
    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
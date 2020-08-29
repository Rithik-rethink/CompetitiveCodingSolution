#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m;
    cin>>n>>m;
    if(n == m){
        cout<<n<<endl;
        return;
    }
    ll temp = m - n;
    if(n % 3 == 0 && m % 3 == 0){
        if(m - n == 3){
            cout<<3<<endl;
            return;
        }
    }
    cout<<2<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
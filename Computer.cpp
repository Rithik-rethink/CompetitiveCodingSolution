#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    ll a = n , b = k;
    n = max(a,b);
    k = min(a,b);
    if( n == k){
        cout<<0<<endl;
        return;
    }
        ll count = 0;
        while( n != k){
            if( n % 8 == 0 && n / 8 >=k ){
                n/=8;
                count+= 1;
            }
            else if(n % 4 == 0 && n /4 >= k){
                n /= 4;
                count+= 1;
            }
            else if( n% 2 == 0 && n / 2 >=k){
                n/=2;
                count += 1;
            }
            else {
                cout<<-1<<endl;
                return;
            }
        }
        if(n == k){
            cout<<count<<endl;
            return;
        }
        cout<<-1<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
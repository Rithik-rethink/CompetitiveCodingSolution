#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , d;
    cin>>n>>d;
    ll m;
    cin>>m;
    while(m > 0){
        ll x , y;
        cin>>x>>y;
        ll temp = x + y;
        ll temp1 = x - y;
        if(temp1 <= d && temp1 >= -d){
            if(temp >=d  && temp <= 2*n - d){
                cout<<"YES"<<endl;
                m-=1;
                continue;
            }
        }
        cout<<"NO"<<endl;
        m -= 1;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
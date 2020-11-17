#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , c1, c2 , h;
    cin>>n>>c1>>c2>>h;
    string s;
    cin>>s;
    if(c1==c2){
        cout<<n*c1<<endl;
        return;
    }
    else if(c1<c2){
        
        ll temp = count(s.begin(),s.end(), '1');
        ll ans = temp * c2;
        ans += c1 * (n-temp);
        ll res = c1 * n;
        res += temp * h;
        cout<<min(res,ans)<<endl;
    }
    else if(c1 > c2){
        ll temp = count(s.begin(),s.end(), '0');
        ll ans = temp * c1;
        ans += c2 * ( n - temp);

        ll res = c2 * n;
        res += temp * h;
        cout<<min(res,ans)<<endl;
    }
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
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
    ll  n , k , s ;
    cin>>n>>k>>s;
    ll one = abs(k-s);
    one+= abs(n - s);
    one += 1;
    one+=(k-1);
    ll second = n + 1;
    second += (k-1);
    // cout<<one<<" "<<second<<endl;
    cout<<min(one,second)<<endl;


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}
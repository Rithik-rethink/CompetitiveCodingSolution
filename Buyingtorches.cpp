#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    lll x , y , k;
    cin>>x>>y>>k;
    lll sticks = y * k;
    lll temp = sticks / x;
    temp += 1;
    lll res1 = x*temp - (temp - 1);
    if(res1 < sticks){
        temp += (temp - 1);
        lll l = k - res1;
        temp += l;
    }
    // cout<<sticks<<" "<<temp<<" "<<res1<<endl;
    // cout<<abs(res1 - sticks)<<endl;
    while(abs(res1 - sticks) < k ){
        temp += 1;
        res1 = x*temp - (temp-1);
    }
    cout<<temp + k<<endl;
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


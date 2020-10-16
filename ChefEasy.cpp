#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    ll toread = 0,day = -1;
    bool flag = true;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        a += toread;
        if(a >= k){
            toread = a - k;
        }
        else if(a < k && flag){
            day = i+1;
            flag = false;
        }
    }
    if(!flag){
        cout<<day<<endl;
        return;
    }
    // cout<<"to read "<<toread<<endl;
    day = n;
    ll temp = toread/k;
    if(toread % k != 0){
        temp += 1;
    }
    day += temp;
    if(toread % k == 0){
        day += 1;
    }
    cout<<day<<endl;
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
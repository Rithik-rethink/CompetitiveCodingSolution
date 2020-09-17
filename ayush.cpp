#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll i = 2;
    set<ll> res;
    while( i * i <= n){
        if(res.size() == 0 && n % i == 0){
            res.insert(i);
            n /= i;
        }
        else if(res.size() == 1 && n % i == 0){
            res.insert(i);
            res.insert(n/i);
            break;
        }
        i += 1;

    }
    if(res.size() == 3){
        cout<<"YES"<<endl;
        for(auto itr : res){
            cout<<itr;
            cout<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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


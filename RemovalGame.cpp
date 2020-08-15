#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
vector<ll> countt(string a){
    ll max = 0, count = 0;
    vector<ll> res;
    for(int i = 0 ; i < a.size() ; ++i){
        //cout<<a[i]<<endl;
        if(a[i] == '1'){
            count += 1;
        }
        else if(count > 0) {
            res.push_back(count);
            count = 0;
        }
    }
    if(a[a.size() - 1] == '1' ){
        res.push_back(count);
    }
    
    return res;
}
void solve() {
	//implementation goes here
    string s;
    cin>>s;
    ll ans = 0;
    vector<ll> ar;
    ar = countt(s);
    sort(ar.begin(),ar.end() , greater<ll>());
    for(int i = 0 ; i < ar.size() ; i+=2){
        ans += ar[i];
    }
    cout<<ans<<endl;
    
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
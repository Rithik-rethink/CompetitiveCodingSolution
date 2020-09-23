#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k ,l;
    cin>>n>>k>>l;
    if(k == 1 && n > 1){
        cout<<-1<<endl;
        return;
    }
    if(k*l < n){
        cout<<-1<<endl;
        return;
    }
    string s = "";
    for(int i =1 ; i <= min(k,n) ; ++i ){
        cout<<i<<" ";
    }
    n -= k;
    if(n < 0){
        n = 0;
    }
    ll i = 1;
    
    while(n && l){
        s += to_string(i);
        s += " ";
        i += 1;
        if(i > k){
            i = 1;
            l -= 1;
        }
        n -= 1;
    }
    // cout<<n<<endl;
    if(n != 0){
        cout<<-1<<endl;
        return;
    }
    if(s.size() > 0){
        s.pop_back();
        cout<<s;
    }
    cout<<endl;
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
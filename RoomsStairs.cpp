#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    string s;
    cin>>s;
    ll first = -1, last = -1;
    for(int i = 0 ; i < n ; ++i ){
        if( s[i] == '1' ){
            last = i;
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ;--i){
        if(s[i] == '1'){
            first = i;
            break;
        }
    }
    
    if(first == -1 && last == -1){
        cout<<n<<endl;
        return;
    }
    first += 1;
    last = (n - 1) - last;
    last += 1;
    last *= 2;
    first *= 2;
    ll res = 0;
    for(int i = 0 ; i < n ;++i ){
        if(s[i] == '1'){
            res += 2;
        }
        else{
            res += 1;
        }
    }
    //first *= 2;
    //last *= 2;
    cout<<max(last,max(first , res))<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		//cout << "Case #" << i << ": ";
		solve();
	}
}
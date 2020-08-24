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
    vector<ll> arr(26,0);

    string s;
    cin>>s;
    
    if(n < 26){
        cout<<"NO"<<endl;
        return;
    }
    for(int i = 0 ; i < n ; ++i){
        char a = tolower(s[i]);
        ll f = a - 'a';
        arr[f] = 1;
    }
    if(find(arr.begin(),arr.end(),0) == arr.end()){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
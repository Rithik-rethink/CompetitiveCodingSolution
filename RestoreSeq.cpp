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
    ll n;
    cin>>n;
    vector<ll> arr,res;
    ll j = 2;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        
        arr.emplace_back(a);
        res.emplace_back(j);
        j+=1;
    }
    reverse(res.begin() , res.end());
    string s = "";
    for(int i = 0 ; i < n ; ++i ){
        if(arr[i] != i+1){
            s+=to_string(res[arr[i]-1]);
        }
        else
            s+=to_string(res[i]);
        s += " ";
    }
    s.pop_back();

    cout<<s<<endl;
    
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
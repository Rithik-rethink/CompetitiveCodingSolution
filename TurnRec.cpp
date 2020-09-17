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
    vector<pair<ll,ll>> arr;
    bool flag = false;
    ll a , b;
    cin>>a>>b;
    ll prev = max(a,b);
    for(int i = 1 ; i < n ; ++i ){
        ll a , b;
        cin>>a>>b;
        if(a <= prev && b > prev && !flag){
            prev = a;
        }
        else if(b <= prev && a > prev && !flag){
            prev = b;
        }
        else if(a <= prev && b <= prev){
            prev = max(a,b);
        }
        else{
            flag = true;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


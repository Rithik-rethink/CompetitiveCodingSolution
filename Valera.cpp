#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    ll count = 0;
    vector<ll> res;
    for(int i = 1 ; i <= n ; ++i){
        ll a ;
        cin>>a;
        bool flag = true;
        for(int j = 0 ; j < a ; j++ ){
            ll f; 
            cin>>f;
            if(f < k && flag){
                count += 1;
                res.push_back(i);
                flag = false;
            }
        }
    }
    cout<<count<<endl;
    if(count > 0){
        for(int i = 0 ; i < res.size() ; ++i){
            cout<<res[i];
            if(i < (n - 1)){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    vector<ll> arr , arr2;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr2.push_back(a);
    }
    set<ll> res;
    ll j = 0;
    bool flag = false ,flag2 = false;
    for(int i = 0 ; i < n ; ++i ){
        if(arr[i] > arr2[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(arr2[i] - arr[i] > 0){
            res.insert(abs(arr[i] - arr2[i]));
            flag = true;    
            if(flag2){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(abs(arr[i] - arr2[i]) == 0 && flag){
            flag2 = true;
        }
    }
    if(res.size() > 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

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
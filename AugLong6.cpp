#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n ;
    cin>>n;
    vector<ll> arr,arr1,res;
    map<ll,ll> arr2;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
        arr1.push_back(a);
        arr2[a]=0;
    }
    sort(arr.begin(),arr.end());
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    ll first = pow(2,n-1);
    ll i = 0;
    while(first != 0){
        //cout<<arr[i]<<" and "<<first<<endl;
        arr2[arr[i]] += first;
        first /= 2;
        i+= 1;
    }
    for(int i = 0 ; i < n ; ++i){
        if(find(res.begin(),res.end(),arr1[i]) != res.end()){
            cout<<0;
        }
        else{
            cout<<arr2[arr1[i]] % 1000000007;
            res.push_back(arr[i]);
        }
        if(i < n-1){
            cout<<' ';
        }
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
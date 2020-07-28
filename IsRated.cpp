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
    cin>> n;
    vector<ll> arr1,arr2;
    bool flag = false;
    for(int i = 0 ; i < n ; ++i){
        ll p,q;
        cin>>p>>q;
        if(p != q){
            flag = true;
        }
        arr1.push_back(p);
        arr2.push_back(p);
    }
    sort(arr1.begin(),arr1.end(),greater<ll>());
    if(flag){
        cout<<"rated"<<endl;
        return;
    }
    ll sum = 0 ;
    for(int i = 0 ; i < n ; ++i){
        if(arr1[i] != arr2[i]){
            cout<<"unrated"<<endl;
            return;
        }
    }
    
    cout<<"maybe"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
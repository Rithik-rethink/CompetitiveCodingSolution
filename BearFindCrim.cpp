#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    k-=1;
    ll N = max(k , (n-1) - k );
    //cout<<N<<endl;
    ll count = 0;
    if(arr[k] == 1){
        count += 1;
    }
    for(int i = 1 ; i <= N ; ++i ){
        bool flag = true;
        if(k + i >= n || arr[k+i] == 1){
            flag = true;
        }
        else if(arr[k + i] == 0){
            flag = false;
        }
        
        if(!flag){
            continue;
        }
        if((k - i) < 0){
            count += 1;
        }
        else if(arr[k - i] == 1 && (k + i) < n){
            //cout<<"here"<<endl;
            count += 2;
        }
        else if((k + i) >= n && arr[k - i] == 1){
            //cout<<"here2"<<endl;
            count += 1;
        }
        
    }
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> arr;
    for(int i = 0 ; i < n ; ++i ){
        vector<ll> temp;
        for(int j = 0 ; j < m ; ++j){
            ll a;
            cin>>a;
            temp.emplace_back(a);
        }
        arr.emplace_back(temp);
    }
    for(int i = 0 ; i < n ; ++i ){
        for(int j = i + 1 ; j < m; ++j ){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0 ; i< n ;++i){
        int l = 0 , r = m-1;
        while(l<r){
            swap(arr[i][l],arr[i][r]);
            l++;
            r--;
        }
    }
    for(int i = 0 ; i < n ; ++i ){
        for(int j = 0 ; j < m; ++j ){
            cout<<arr[i][j];
            
            cout<<" ";
            
        }
    }
    cout<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin>>t;
	for(int i = 0 ; i < t ; ++i ){
	    
	    solve();
	}
}
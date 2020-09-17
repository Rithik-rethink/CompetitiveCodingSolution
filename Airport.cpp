#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, m;
    cin>>n>>m;
    vector<ll> arr , arr1;
    for(int i = 0 ; i < m ;++i){
        ll a;
        cin>>a;
        arr.push_back(a);
        arr1.push_back(a);
    }
    ll maxi = 0 , mini = 0;
    ll i = 0 , j = 0;
    sort(arr.begin() , arr.end() , greater<ll>());
    
    sort(arr1.begin() , arr1.end());
    while(n!=0){
        maxi += arr[i];
        mini += arr1[j];
        if( i < n-1){
            arr[i] -= 1;
        }
        arr1[j] -= 1;
        if(arr1[j] == 0){
            j += 1;
        }
        sort(arr.begin() , arr.end() , greater<ll>());
        n -= 1;
    }
    cout<<maxi<<" "<<mini<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
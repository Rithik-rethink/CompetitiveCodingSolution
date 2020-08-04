#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    vector<ll> arr;
    for(int i = 0 ; i <= 2 ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll maxi = 1;
    if(arr[0] * arr[1] * arr[2] > maxi){
        maxi = arr[0] * arr[1] * arr[2];
    }
    if(arr[0] + arr[1] + arr[1] > maxi){
        maxi = arr[0] + arr[1]  + arr[2] ;

    }
    if((arr[0] + arr[1]) * arr[2] > maxi){
        maxi = (arr[0] + arr[1]) * arr[2];
    }
    if(arr[0] * (arr[1] + arr[2]) > maxi){
        maxi = arr[0] * (arr[1] + arr[2]);
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
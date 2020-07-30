#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m;
    cin>>n>>m;
    ll count = 0;
    vector<ll> arr;
    for(int i = 0 ; i  < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    count += 1;
    vector<ll> arr1;
    ll f = arr[0] + m;
    if(arr[1] - f >= m){
        //cout<<f<<endl;
        count += 1;
        arr1.push_back(f);
    }
    for(int i = 1 ; i  < n-1 ; ++i){
        ll d = arr[i] - m ;
        if(d - arr[i-1] >= m && find(arr1.begin(),arr1.end(),d) == arr1.end()){
            //cout<<d<<endl;
            count+= 1;
            arr1.push_back(f);
        }
        d = arr[i] + m;
        if(arr[i+1] - d >= m && find(arr1.begin(),arr1.end(),d) == arr1.end()){
            //cout<<d<<endl;
            count+= 1;
            arr1.push_back(f);
        }
    }
    f = arr[n-1] - m;
    if(f - arr[n-2] >= m && find(arr1.begin(),arr1.end(),f) == arr1.end()){
        //cout<<f<<endl;
        count += 1;
    }
    count+=1 ;
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
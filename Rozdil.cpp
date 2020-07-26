#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin >> a;
        arr.push_back(a);

    }
    if(count(arr.begin(),arr.end(),*min_element(arr.begin(),arr.end())) > 1){
        cout<<"Still Rozdil"<<endl;
        return;
    }
    vector<ll>::iterator t = find(arr.begin(),arr.end(),*min_element(arr.begin(),arr.end())) ;
    
    cout<<t - arr.begin() + 1<<endl;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
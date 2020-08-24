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
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll a = 0 , b = 1,count = 2 , sub = arr[a] - arr[b];
    a += 1;
    b += 1;
    ll maxi = 2;
    for(int i = 2 ; i < n ; ++i){
        if(arr[a] - arr[b] == sub){
            count += 1;
            //cout<<arr[a]<<" "<<arr[b]<<" "<<count<<endl;
        }
        else{
            if(count > maxi){
                maxi = count;
            }
            sub = arr[a] - arr[b];
            count = 2;
        }
        a += 1;
        b += 1;
    }
    if(count > maxi){
        maxi = count;
    }
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}
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
    vector<ll> arr(n);
    for(int i = 0 ; i <  n ; ++i){
        cin>>arr[i];
    }
    ll i = n - 1, j = 0;
    
    while(i > j){
        ll temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j += 2;
        i -= 2;
    }
    for(int itr = 0; itr < n; itr++){
        cout<<arr[itr];
        if(itr < n-1){
            cout<<" ";
        }
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
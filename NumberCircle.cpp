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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    if(n < 3){
        cout<<"YES"<<endl;
        return;
    }
    ll half = n/ 2;
    half-=1;
    sort(arr.begin() , arr.end());
    bool flag = false;
    if(arr[n-1] < arr[n-2] + arr[n-3]){
        flag = true;
    }
    if(flag){
        cout<<"YES"<<endl;
        for(int i = 0 ; i < n - 3 ; ++i ){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-2]<<" "<<arr[n-1]<<" "<<arr[n-3]<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
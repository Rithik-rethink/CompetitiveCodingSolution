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
    vector<ll> arr ,arr1;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        arr1.emplace_back(a);

    }
    sort(arr.begin() , arr.end());
    sort(arr1.begin() , arr1.end() , greater<ll>());
    string s = "";
    ll i =0;
    while(n){
        // cout<<arr[i]<<" "<<arr1[i]<<endl;
        if(arr[i] > arr1[i]){
            // cout<<arr[i]<<" "<<arr1[i]<<endl;
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        if(n > 0){
            s += to_string(arr[i]);
            s += " ";
        }
        n -= 1;
        if(n > 0){
            s += to_string(arr1[i]);
            s += " ";
        }
        else{
            cout<<s<<endl;
            return;
        }
        i += 1;
        n -= 1;
    }
    s.pop_back();
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
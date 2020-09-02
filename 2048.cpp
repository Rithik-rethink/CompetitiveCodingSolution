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
    for(int i = 0 ; i  < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    if(find(arr.begin() , arr.end() ,2048) != arr.end()){
        cout<<"YES"<<endl;
        return;
    }
    sort(arr.begin(),arr.end());
    ll i = 0;
    while(i < arr.size() - 1){
        if(arr[i] != arr[i+1]){
            arr.erase(arr.begin() + 0);
            continue;
        }
        
        ll temp = arr[0] + arr[1];
        //cout<<temp<<endl;
        if(temp == 2048){
            cout<<"YES"<<endl;
            return;
        }
        arr.erase(arr.begin() + 0);
        arr.erase(arr.begin() + 0);
        arr.push_back(temp);
        sort(arr.begin(),arr.end());
        
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
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
    vector<ll> arr, ind(n , 0);
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        ind[arr[i] - 1] = i + 1;
    }
    // for(int i = 0 ; i  < n ; ++i ){
    //     cout<<ind[i]<<endl;
    // }
    ll temp = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        if(ind[a-1] > temp){
            cout<<ind[a - 1] - temp;
            temp = ind[a - 1] ;
        }
        else {
            // cout<<"here "<<temp<<" "<<ind[a-1]<<" "<<a<<endl;
            cout<<0;
        }
        if(i < n-1){
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


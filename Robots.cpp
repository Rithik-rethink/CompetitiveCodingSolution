#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k;
    cin>>n>>k;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    ll sum = 1;
    for(int i = 1 ; i <= n ; ++i ){
        if(k > sum){
            sum += i+1;
        }
        else{
            sum -= i;
            ll diff = k - sum;
            if(diff == 0){
                cout<<arr[i-1]<<endl;
                return;
            }
            cout<<arr[diff - 1]<<endl;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


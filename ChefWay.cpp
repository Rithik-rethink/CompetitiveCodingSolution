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
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll res = arr[0] , l = 1;
    ll i = 0 ,y = 1;
    ll x = 0; 
    while( i < arr.size()){
        if(((y+1) - (x + 1)) <= k){
            ll mini = res * arr[y];
            ll j;
            for(j = y; j < n ; j++ ){
                if(((j+1) - (x + 1)) > k){
                    break;
                }
                ll temp = res * arr[y];
                if(temp < mini){
                    mini = temp;
                }
            }
            res = mini;
            i = j;
        }
        else{
            res *= arr[i];
            i += 1;
        }
        x = i;
        y = i + 1; 
        //cout<<res<<endl;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

		solve();
}
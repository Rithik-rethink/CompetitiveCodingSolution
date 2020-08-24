#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

vector<ll> findans(vector<ll> arr , ll i , ll n){
    if( (2 * i) == arr[arr.size() - 1] || i == arr[arr.size() - 1]){
        return arr;
    }
    else if( find(arr.begin() , arr.end() , arr[arr.size() - 1] - i) != arr.end()){
        return arr;
    }
    ll r = arr[arr.size() - 1];
    arr.pop_back();
    arr.push_back(i);
    arr.push_back( r - i );
    i += 1;
    return findans(arr,i,n);
}

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> res;
    res.push_back(n);
    ll i = 1;
    res = findans(res,i,n);
    cout<<res.size()<<endl;
    for(int i = 0 ; i < res.size() ; ++i){
        if(res[i] > 0){
            cout<<res[i];
            if( i < (res.size() - 1 )){
                cout<<' ';
            }
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
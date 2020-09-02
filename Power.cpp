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
        arr.push_back(a);
    }
    sort(arr.begin() , arr.end());
    ll temp = arr[1] , res = 0 ,res1 = arr[0] - 1;
    for(int i = 0 ; i < n ; ++i ){
        ll d = pow(temp , i);
        d = abs(d - arr[i]);
        res += d;
    }
    float d = round(sqrt(arr[1]));
    //cout<<d<<endl;
    for(int i = 1 ; i < n ; ++i){
        ll te = pow(d , i);
        te = abs(te - arr[i]);
        //cout<<te<<endl;
        res1 += te;
    }
    cout<<min(res,res1)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
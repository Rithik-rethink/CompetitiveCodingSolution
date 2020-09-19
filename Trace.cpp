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
    double pi = 3.1415926536;
    cin>>n;
    
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    sort(arr.begin() , arr.end());
    ll red = 0, blue = 0;
    for(int i = 0 ; i < n ; ++i ){
        if(n & 1){
            if(i & 1){
                blue += arr[i]*arr[i];
            }
            else{
                red += arr[i]*arr[i];
            }
        }
        else{
            if(i & 1){
                red += arr[i]*arr[i];
            }
            else{
                blue += arr[i]*arr[i];
            }
        }
    }
    // cout<<red<<" "<<blue<<endl;
    double res = abs(red - blue);
    res *= pi;
    ll num = res;
    ll size = floor(log10(num)) + 1;
    // cout<<size<<endl;
    cout<<setprecision(10 + size)<<res<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


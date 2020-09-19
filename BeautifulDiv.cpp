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
    vector<ll> arr ;
    arr.emplace_back(32640);
    arr.emplace_back(8128);
    arr.emplace_back(2016);
    arr.emplace_back(496);
    arr.emplace_back(120);
    arr.emplace_back(28);
    arr.emplace_back(6);
    arr.emplace_back(1);
    for(int i = 0 ; i < arr.size() ; ++i ){
        // cout<<n%arr[i]<<endl;
        if(n % arr[i] == 0){
            cout<<arr[i]<<endl;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


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
    if(n & 1){
        arr.emplace_back(1);
    }
    ll count2 = n / 2;
    
    ll temp = count2 ;
    if(count2 & 1){
        count2 -=1;
        arr.emplace_back(2);
    }
    ll count = 0;
    // cout<<count2<<endl;
    while(count2 > 0){
        if(count2 & 1){
            arr.emplace_back(2 + count);
            count2 -= 1;
        }
        count2 /= 2;
        count += 1;
    }

    
    reverse(arr.begin() , arr.end());
    for(int i = 0 ; i < arr.size() ; ++i ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
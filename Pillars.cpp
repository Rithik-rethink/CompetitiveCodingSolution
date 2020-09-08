#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i  < n ;++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll max = *max_element(arr.begin() , arr.end());
    bool flag = false;
    for(int i = 0 ; i < n ;++i){
        if(arr[i] == max){
            flag = true;
            ll temp , temp1;
            if(i + 1 < n){
                temp = abs(arr[i] - arr[i+1]);
            }
            if( i - 1 >= 0){
                temp1 = abs(arr[i-1] - arr[i]);
            }
            if(temp != 1 && temp1 != 1){
                cout<<"NO"<<endl;
                return;
            }
            continue;
        }
        if(flag){
            if(arr[i-1] < arr[i] && i > 0){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(arr[i-1] > arr[i] && i > 0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
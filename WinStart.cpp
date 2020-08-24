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
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    bool flag =true;
    sort(arr.begin(),arr.end(),greater<ll>());
    if(arr[0] > (arr[1] + arr[2])){
        cout<<"first"<<endl;
        return;
    }
    
    ll firstp = arr[0];
    ll secondp = arr[1] + arr[2];
    for(int i = 3 ; i <n ; ++i){
        if(flag){
            flag = false;
            firstp += arr[i];
        }
        else{
            flag = true;
            secondp += arr[i];
        }
    }
    if(secondp > firstp ){
        cout<<"second"<<endl;
        return;
    }
    if(firstp == secondp){
        cout<<"draw"<<endl;
        return;
    }
    else{
        cout<<"first"<<endl;
        return;
    }
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
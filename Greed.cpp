#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
void solve() {
	//implentation goes here
    lll n;
    cin>>n;
    vector<lll> arr,arr1;
    for(lll i = 0 ; i < n ;++i){
        lll a;
        cin>>a;
        arr.push_back(a);
    }
    for(lll i = 0 ; i < n ;++i){
        lll a;
        cin>>a;
        arr1.push_back(a);
    }
    lll sum = accumulate(arr.begin(),arr.end(),0);
    sort(arr1.begin(),arr1.end());
    if(arr1[n-1] + arr1[n-2] >= sum){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
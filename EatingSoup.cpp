#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m,count = 0 ;
    cin>>n>>m;
    if(n == m){
        cout<<0<<endl;
        return;
    }
    if(m > n/2){
        cout<<n-m<<endl;
        return;
    }
    bool flag = true;
    vector<ll> arr(n, 1);
    for(int i = 0 ; i < n ; ++i){
        if(flag && m > 0){
            arr[i] = 0;
            m -= 1;
            flag = false;
        }
        else if(m == 0){
            count+=1;
            break;
        }
        else{
            count += 1;
            flag = true;
        }
        //cout<<arr[i]<<endl;
    }
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
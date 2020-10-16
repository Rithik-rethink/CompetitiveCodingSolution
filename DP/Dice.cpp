#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll cnt = 0;

ll magic(vector<ll> arr ,ll n , ll op){
    if(op >= n){
        return cnt;
    }
    op += arr[0];
    if(op == n){
        cnt += 1;
    }
    ll temp2 = magic(arr , n, op);
    arr.erase(arr.begin() + 0);
    ll temp1 = magic(arr , n , op);
    return temp1 + temp2;
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    vector<ll> arr = {1,2,3,4,5,6};
    ll op = 0;
    ll res = magic(arr,n,op);
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
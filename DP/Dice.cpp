#include <bits/stdc++.h>
using namespace std;
 
#define lll int64_t
#define ll long long
#define ar array
 
const int mxN=2e5;
int n, a[mxN], k;
 
ll arr[1000001];
 
ll mod = 1e9 + 7;
ll magic(ll n){
    if(n <= 0){
        if( n == 0)
            return 1;
        return 0;
    }
    if(arr[n] != 0){
        return arr[n];        
    }
    for(int i = 1 ; i <= 6 ; ++i ){
        arr[n-i] = magic(n - i);
        arr[n] += arr[n-i];
    }
    
    return arr[n] % mod;
}
 
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    memset(arr , 0 , sizeof(arr));
    ll result = magic(n) % mod;
    cout<<result<<endl;
    
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	solve();
}
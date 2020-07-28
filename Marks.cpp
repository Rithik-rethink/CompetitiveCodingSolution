#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m;
    cin>>n>>m;
    vector<string> arr(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }
    vector<bool> success(n,false);
    for(int i = 0 ; i <= m ; ++i){
        char best = '0';
        for(int j = 0 ; j < n ; j++){
            if(arr[j][i] > best){
                best = arr[j][i];
            }
        }
        for(int j = 0 ; j < n ; ++j){
            if(arr[j][i] == best){
                success[j] = true;
            }
        }
    }
    cout<<count(success.begin(),success.end(),true)<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
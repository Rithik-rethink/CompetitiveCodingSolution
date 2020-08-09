#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    map<string,ll> arr;
    for(int i = 0 ; i < n ;++i){
        string s ;
        cin>>s;
        arr[s] += 1;
    }
    ll max= 0;
    string res;
    for(auto itr = arr.begin() ; itr != arr.end() ; ++itr){
        //cout<<itr->first<<" "<<itr->second<<endl; 
        if(itr->second > max){
            res = itr->first;
            max = itr->second;
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
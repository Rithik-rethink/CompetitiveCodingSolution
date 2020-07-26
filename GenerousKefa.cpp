#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,k;
    cin>>n>>k;
    map<char,ll> sett;
    for(int i = 0 ; i < n ; ++i){
        char s;
        cin>>s;
        sett[s]++;

    }
    map<char,ll>::iterator itr;
    for(itr = sett.begin();itr != sett.end();itr++){
        if(itr->second > k){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
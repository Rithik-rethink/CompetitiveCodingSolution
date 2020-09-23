#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m;
    cin>>n>>m;
    string a,b;
    map<ll ,ll> mp;
    cin>>a>>b;
    ll inc = n;
    for(int i = 0 ; i < m - n + 1 ; ++i ){
        string s = b.substr(i ,inc);
        bool flag = true;
        ll c = 0;
        for(int j = 0 ; j < n ; ++j ){
            if(s[j] == a[j]){
                flag = false;
            }
            else{
                c += 1;
            }

        }
        if(!flag){
            mp[i] = c;
        }
    }
    ll mini = n , start = 0;
    for(auto itr = mp.begin() ; itr!=mp.end() ; ++itr){
        if(itr->second < mini){
            mini = itr->second;
            start = itr->first;
        }
    }
    string s = b.substr(start , n);
    cout<<mini<<endl;
    for(int i = 0 ; i < n ; ++i ){
        if(s[i] != a[i]){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
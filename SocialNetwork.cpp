#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n,m;
    cin>>n>>m;
    vector<ll> q;
    set<ll> s;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        s.insert(a);
        if(q.empty()){
            q.push_back(a);
        }
        else if(q.size() == m && find(q.begin(),q.end(),a) == q.end()){
            q.erase(q.begin());
            q.push_back(a);
        }
        else if(q.size() < m && find(q.begin(),q.end(),a) == q.end()){
            q.push_back(a);
        }
    }
    ll res = m < s.size() ? m : s.size();
    cout<<res<<endl;
    //cout<<min(s.size(),m)<<endl;
    for(ll itr = q.size() - 1 ; itr >= 0 ; --itr){
        cout<<q[itr];
        if(itr > 0) {
            cout<<' ';
        }
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
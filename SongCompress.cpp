#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, m;
    cin>>n>>m;
    vector<pair<ll,ll>> arr;
    ll sum1 = 0;
    for(int i = 0 ; i < n ; ++i ){
        pair<ll ,ll> p;
        ll a, b;
        cin>>a>>b;
        p.first = a;
        p.second = b;
        arr.emplace_back(p);
        sum1 += a;
    }
    sort(arr.begin() , arr.end() , [&](pair<ll,ll> a , pair<ll,ll> b){return a.first - a.second > b.first - b.second;});
    ll i ;
    for(i = 0 ; i < n ; ++i ){
        // cout<<sum1<<" asd"<<endl;
        if(sum1 <= m){
            cout<<i<<endl;
            return;
        }
        sum1 -= (arr[i].first - arr[i].second);
    }    
    if(sum1 <= m){
        cout<<n<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
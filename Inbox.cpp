#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    vector<ll> arr;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
    }
    if(find(arr.begin() , arr.end() , 1) == arr.end()){
        cout<<0<<endl;
        return;
    }
    auto itr = find(arr.begin() , arr.end() , 1);
    ll ind = distance(arr.begin() , itr);
    ll res = 1;
    ll i = ind + 1;
    
    while(i < n){
        if(find(arr.begin() + i , arr.end() , 1) == arr.end()){
            cout<<res<<endl;
            return;
        }
        auto itr = find(arr.begin() + i , arr.end() , 1);
        ll dis = distance(arr.begin() , itr);
        ll temp = abs(dis - ind);
        ll o = 2;
        res += min(temp, o);
        ind = dis;
        i = ind + 1;
        //cout<<i<<endl;
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


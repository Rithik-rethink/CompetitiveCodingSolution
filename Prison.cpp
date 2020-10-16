#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll t;
bool isbig(ll x){
    return x <= t;
}

void solve() {
	//implementation goes here
    ll n , c ;
    cin>>n>>t>>c;
    vector<ll> arr;
    ll count = 0 , res = 0;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        count += 1;
        
        if(count == c){
            if(all_of(arr.begin() , arr.end() , isbig))
                res += 1;
            arr.erase(arr.begin() + 0);
            count -= 1;
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
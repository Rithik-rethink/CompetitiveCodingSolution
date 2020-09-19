#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, k;
    cin>>n>>k;
    vector<ll> arr , arr1;
    ll ans1 = 0, ans2 = 0, maxi = 0;
    for(int i = 0 ; i < k ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        ll temp = n / a;
        ll temp2 = temp * a;
        if(temp2 > maxi){
            ans1 = i+1;
            ans2 = temp;
            maxi = temp2;
        }
    }
    if(ans1 == 0 && ans2 == 0){
        cout<<1<<" "<<0<<endl;
        return;
    }
    cout<<ans1<<" "<<ans2<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


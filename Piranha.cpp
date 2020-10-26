#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    set<ll,greater<ll>> st;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.emplace_back(a);
        st.insert(a);
    }
    if(st.size() == 1){
        cout<<-1<<endl;
        return;
    }
    auto itr = st.begin() ; 
    ll maxi = *itr;
    for(int i = 0 ; i < n ; ++i ){
        if(arr[i] == maxi){
            if(arr[i+1] < maxi && i < n-1){
                cout<<i+1<<endl;
                return;
            }
            else if(arr[i-1] < maxi && i > 0){
                cout<<i+1<<endl;
                return;
            }
        }
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
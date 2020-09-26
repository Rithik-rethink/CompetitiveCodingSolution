#include <bits/stdc++.h>
using namespace std;
 
#define lll int64_t
#define ll long long
#define ar array
 
const int mxN=2e5;
int n, a[mxN], k;
 
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr1,arr2;
    bool flag = true;
    set<ll> st;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        st.insert(a);
        arr1.emplace_back(a);
        arr2.emplace_back(a);
    }
    if(st.size() != arr1.size()){
        flag = false;
    }
    ll maxi = n*(n-1);
    maxi/=2;
    maxi-=1;
    sort(arr2.begin() , arr2.end());
    if(arr1 == arr2){
        cout<<"YES"<<endl;
        return;
    }
    if(maxi == 0 || n == 2){
        cout<<"NO"<<endl;
        return;
    }
    sort(arr2.begin() , arr2.end() , greater<ll>());
    if(arr2 == arr1 && flag){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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
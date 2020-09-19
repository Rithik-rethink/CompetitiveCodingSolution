#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

bool isEven(ll i){
    return i % 2;
}

void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    string s;
    cin>>s;
    if(n == 1){
        ll temp = s[0] - '0';
        if(temp & 1){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            return;
        }
    }
    vector<ll> arr1,arr2;
    for(int i = 0 ; i < s.size(); ++i ) {
        if(i % 2 == 0){
            arr1.emplace_back(s[i]-'0');
        }
        else{
            arr2.emplace_back(s[i]-'0');
        }
    }
    ll ce1 = count_if(arr1.begin() , arr1.end() , isEven);
    ll co1 = arr1.size() - ce1;
    ll ce2 = count_if(arr2.begin() , arr2.end() , isEven);
    ll co2 = arr2.size() - ce2;
    if(arr1.size() > arr2.size()){
        if(co1 > 0){
            cout<<1<<endl;
            return;
        }
        cout<<2<<endl;
        return;
    }
    else if(arr1.size() < arr2.size()){
        if(ce2 > 0){
            cout<<2<<endl;
            return;
        }
        cout<<1<<endl;
        return;
    }
    else if(arr1.size() == arr2.size()){
        if(ce2 > 0){
            cout<<2<<endl;
            return;
        }
        cout<<1<<endl;
        return;
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


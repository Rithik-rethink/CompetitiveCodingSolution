#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    vector<ll> arr;
    string s ;
    cin>>s;
    for(int i = 0  ; i < s.size() ; ++i ){
        arr.push_back(s[i] - '0');
    }
    ll count = 0;
    while(arr.size() > 1){
        ll sum = accumulate(arr.begin() , arr.end() , 0);
        arr.clear();
        string a = to_string(sum);
        for(int i = 0 ; i < a.size() ; ++i ){
            arr.push_back(a[i] - '0');
        }
        count += 1;
    }
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
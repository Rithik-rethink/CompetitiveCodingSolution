#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;



void solve() {
	//implementation goes here
    string s, s1;
    cin>>s>>s1;
    ll i = 0;
    ll n = s.size();
    sort(s.begin() , s.end());
    if(s1.size() < n){
        cout<<"NO"<<endl;
        return;
    }
    while(i < s1.size()){
        string temp = s1.substr(i,n);
        sort(temp.begin() , temp.end());
        // cout<<temp<<" "<<s<<endl;
        if(s== temp){
            cout<<"YES"<<endl;
            return;
        }
        i += 1;
    }
    cout<<"NO"<<endl;
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
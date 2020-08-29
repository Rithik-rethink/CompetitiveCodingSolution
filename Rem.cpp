#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s ;
    cin>>s;
    unordered_set<char> arr ;
    arr.insert(s.begin(),s.end());
    string res = "";
    for(auto itr = arr.begin() ; itr != arr.end() ; ++itr){
        res += *itr;
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
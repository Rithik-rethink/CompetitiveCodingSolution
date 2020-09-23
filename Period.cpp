#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    set<char> st(s.begin() , s.end());
    if(st.size() == 1){
        cout<<s<<endl;
        return;
    }
    string res = "";
    bool flag = true;
    for(int i = 0 ; i <  s.size() ; ++i ){
        res.push_back(s[i]);
        if(s[i] == s[i+1]){
            flag = false;
            if(s[i] == '1'){
                res += "0";
            }
            else{
                res += "1";
            }
        }     
    }
    if(flag){
        cout<<s<<endl;
        return;
    }
    cout<<res<<endl;
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
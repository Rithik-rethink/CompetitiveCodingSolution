#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    string s;
    cin>>s;

    string r  = "0";
    bool flag = false;
    if(s[s.size() - 1] == '0'){
        flag = true;
    }
    for(int i = s.size() - 1 ; i >= 0 ; --i){
        if(s[i] -'0' > 0){
            r = "";
            flag = false;
        }
        if(flag){
            continue;
        }
        cout<<s[i];
    }
    cout<<r<<endl;
    
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
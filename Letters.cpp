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
    string s1;
    ll j = s.size() - 1;
    ll i,res=-1;
    bool flag = true;
    for(i = 0 ; i < s.size()/2;i++){
        if(s[i] != s[j]){
            cout<<s<<endl;
            return;
        }
        
        j -= 1;
    }
    for(int i = 0;i<s.size();i++){
        if(s[i]!=s[0] && flag == true){
            res = i;
            flag = false;
        }
    }
    if(res == -1){
        cout<<-1<<endl;
        return;
    }
    //cout<<res<<endl;
    char p = s[0];
    s[0] = s[res];
    s[res] = p;
    cout<<s<<endl;


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
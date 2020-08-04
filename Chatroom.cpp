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
    string r = "hello";
    ll f = 0;
    ll i;
    for(i = 0 ; i < s.size() - 1 ; i++){
        if(s[i] == r[0]){
            r.erase(r.begin() + f);
            //cout<<s[i]<<" "<<r<<endl;
            k+=1;
            
        }
    }
    if(s[i] == r[0]){
            r.erase(r.begin() + f);
            //cout<<s[i]<<" "<<r<<endl;
            k+=1;
            
        }
    if( r == ""){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    if( k == 0){
        cout<<s<<endl;
        return;
    }
    else if(s.size() == 1){
        cout<<0<<endl;
        return;
    }
    else{
        if(s[0] - '0' > 1){
            s[0] = '1';
            k -= 1;
        }
        for(int i = 1 ; i < s.size() ; ++i){
            if(k == 0){
                cout<<s<<endl;
                return;
            }
            if(s[i] - '0' > 0){
                s[i] = '0';
                k -= 1;
            }
        }
    }
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
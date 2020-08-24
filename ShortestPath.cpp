#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a,b;
    cin>>a>>b;
    ll m,n,o,p;
    m = a[0] - 'a';
    n = b[0] - 'a';
    o = a[1] - '0';
    p = b[1] - '0';
    m = m - n;
    o = o - p;
    cout<<max(-m,max(-o,max(m,o)))<<endl;

    while(m != 0 || o != 0){
        string s = "";
        if(m > 0){
            s += "L";
            m -= 1;
        }
        else if( m < 0 ){
            m += 1;
            s += "R";
        }
        if(o > 0){
            s += "D";
            o -= 1;
        }
        else if( o < 0 ){
            s += "U";
            o += 1;
        }
        cout<<s<<endl;
        
    }

    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
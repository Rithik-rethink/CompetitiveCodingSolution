#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void magic( string op , string ip){
    if( ip == ""){
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    op2 += " ";
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    magic(op1 , ip);
    magic(op2 , ip);
    return;
}

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    string op = "";
    op.push_back(s[0]);
    s.erase(s.begin() + 0);
    magic(op , s);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
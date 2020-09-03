#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void magic(string ip, string op){
    if( ip == "" ){
        cout<<op<<endl;
        return;
    }
    if(isalpha(ip[0])){
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin() + 0);
        magic(ip,op1 );
        magic(ip,op2 );
    }
    else{
        op.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        magic(ip , op);
    }
    
    return;
}

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    string op ="";
    magic(s , op);
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void calc(string ip , string op){
    if(ip.size() == 0){
        cout<<op<<endl;
        return;
    }
    string op1 = op ;
    string op2 = op ;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    calc(ip , op1);
    calc(ip , op2);
    return;
}   

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    string op = "";
    calc(s , op);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
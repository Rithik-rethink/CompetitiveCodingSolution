#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

string insert(string s , char r){
    if(s.size() == 0){
        s = to_string(r);
        return s;
    }
    char e = s[s.size() - 1];
    s.pop_back();
    s = insert(s , r);
    s += to_string(e);
    return s;
}

string calc(string s){
    if(s.size() == 1){
        return s;
    }
    char r = s[s.size() - 1];
    s.pop_back();
    s += calc(s);
    s = insert(s , r);
    return s;
}

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    s = calc(s);
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
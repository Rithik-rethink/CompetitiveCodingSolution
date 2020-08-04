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
    vector<char> ch;
    ch.push_back('a');
    ch.push_back('e');
    ch.push_back('i');
    ch.push_back('o');
    ch.push_back('u');
    ch.push_back('y');
    string r = "";
    for(int i = 0 ; i < s.size() ; ++i){
        s[i] = tolower(s[i]);
        //cout<<s[i]<<endl;
        if(find(ch.begin(),ch.end(),s[i]) == ch.end()){
            r += '.';
            r += s[i];
        }
        //cout<<r<<endl;
    }
    cout<<r<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
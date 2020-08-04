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
    bool a = false;
    for(int i = 1 ; i < s.size() ; ++i){
        if(islower(s[i])){
            a = true;
            break;
        }
        if(!isalpha(s[i])){
            a = true;
            break;
        }
    }
    if(a){
        cout<<s<<endl;
        return;
    }
    if(isupper(s[0]))
        cout<<char(tolower(s[0]));
    else
        cout<<char(toupper(s[0]));
        
    for(int i = 1 ; i < s.size() ; ++i){
        if(isupper(s[i]))
            cout<<char(tolower(s[i]));
        else
            cout<<char(toupper(s[i]));
    }
    cout<<endl;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
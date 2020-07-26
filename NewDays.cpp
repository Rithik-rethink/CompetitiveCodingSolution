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
    getline(cin,s);
    if(s.find("week") != string::npos){
        if(s[0] - '0' >= 5 && s[0] - '0' < 7){
            cout<<53<<endl;
            return;
        }
        else {
            cout<<52<<endl;
            return;
        }
        
    }
    else{
        ll a,b;
        a = s[0] - '0';
        if(s[1] != ' '){
            b = s[1] - '0';
            a = a*10 + b;
            if(a>29){
                if(a==31){
                    cout<<7<<endl;
                    return;
                }
                cout<<11<<endl;
                return;
            }
        }
        cout<<12<<endl;
        return;

    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
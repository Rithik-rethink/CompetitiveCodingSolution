#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    ll prev = 0,jumps,maxi = 0, i;
    for(i = 0 ; i < s.size() ; ++i){
        //cout<<s[i]<<endl;
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
            jumps = (i + 1) - prev;
            prev = i + 1;
            if(jumps > maxi){
                maxi = jumps;
            }
        }
    }
    //cout<<"prev = "<<prev<<" & "<<i<<endl;
    jumps = (i + 1) - prev;
    if(jumps > maxi){
        maxi = jumps;
    } 
    cout<<maxi<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
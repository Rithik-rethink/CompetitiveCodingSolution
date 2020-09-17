#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void magic(string s , ll o , ll n){
    if(n == 0){
        cout<<s<<endl;
        return;
    }
    string s1 = s;
    string s2 = s;
    s1 += "(";
    s2 += ")";
    if(o == n){
        magic(s1 , o - 1 , n);
        return;
    }
    else if( o == 0){
        magic(s2 , o , n-1);
    }
    else{
        magic(s1,o-1,n);
        magic(s2,o,n-1);
    }
    return;
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll o = n , c = n;
    string res ="";
    magic(res, o,c);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
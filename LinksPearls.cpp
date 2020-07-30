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
    ll a = count(s.begin(),s.end(),'o');
    ll b = count(s.begin(),s.end(),'-');
    if(a == 0){
        cout<<"YES"<<endl;
        return;
    }
    if(b % a == 0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string s;
    cin>>s;
    if(s.find('4') == string::npos && s.find('7') == string::npos){
        cout<<-1<<endl;
        return;
    }
    ll c1 = count(s.begin() , s.end() , '4');
    ll c2 = count(s.begin() , s.end() , '7');
    if(c1 >= c2){
        cout<<'4'<<endl;
        return;
    }
    cout<<'7'<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}


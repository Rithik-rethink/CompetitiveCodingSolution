#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a,b,c;
    cin>>a>>b>>c;
    a += b;
    for(int i = 0 ; i < a.size() ; i++){
        ll temp = count(a.begin(),a.end(),a[i]);
        if(c.find(a[i]) == string::npos){
            cout<<"NO"<<endl;
            return;
        }
        if(count(c.begin(),c.end(),a[i]) != temp){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    string a,b;
    cin>>a;
    cin>>b;
    if(a == b){
        cout<<-1<<endl;
        return;
    }
    cout<<max(a.size(),b.size())<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
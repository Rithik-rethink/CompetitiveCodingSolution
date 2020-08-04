#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    float d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    float temp = l-d;
    float temp2 = v1 + v2;
    cout<<setprecision(7)<<temp/temp2<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
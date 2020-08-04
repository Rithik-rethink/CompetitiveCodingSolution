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
    ll j = 0;
    ll sum = 0;
    for(int i = s.size() - 1 ; i >=0 ; i--){
        if(s[i] != '0')
            sum += pow(2,j);
        j += 1;
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
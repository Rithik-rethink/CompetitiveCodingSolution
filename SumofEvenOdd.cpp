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
    ll sum1 = 0, sum2 = 0;
    for(int i = 0 ; i < s.size() ; ++i){
        ll d = s[i] - '0';
        if(d % 2 == 0){
            sum1 += d;
        }
        else{
            sum2 += d;
        }
    }
    cout<<sum1<<' '<<sum2<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
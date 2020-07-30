#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll a,b;
    cin>>a>>b;
    if(a % 2 == 0 && b % 2 == 0){
        ll temp = (b - a) / 2;
        temp += b;
        cout<<temp<<endl;
    }
    else if(a % 2 != 0 && b % 2 != 0){
        ll temp = (b - a) / 2;
        temp -= b;
        cout<<temp<<endl;
    }
    else if(a % 2 == 0 && b%2!=0){
        cout<<-((b-a) + 1) / 2 <<endl;
    }
    else{
        cout<<((b-a) + 1) / 2 <<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
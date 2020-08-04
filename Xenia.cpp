#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,m;
    cin>>n>>m;
    ll a;
    cin>>a;
    ll sum = a - 1;
    for(int i = 1 ; i  < m ; ++i){
        ll p;
        cin>>p;
        if(p < a){
            sum += n - (a-p);
        }
        else{
            sum += p - a;
        }
        a = p;
    }
    cout<<sum<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
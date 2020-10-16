#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , m , a, b;
    cin>>n>>m>>a>>b;
    ll temp = n / m ;
    ll ex = temp + 1;
    ll ex2 = n * a;
    ex *= b;
    n -= (temp * m);
    temp *= b;
    ll temp2 = n * a;
    cout<<min((temp+temp2) , min(ex , ex2))<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
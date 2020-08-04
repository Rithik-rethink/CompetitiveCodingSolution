#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n,sum = 0;
    cin>>n;
    while( n/2 != 0){
        if(n % 2 == 1){
            sum++;
        }
        n /= 2;
    }
    cout<<sum+1<<endl;


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
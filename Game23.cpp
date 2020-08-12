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
    
    ll count = 0;
    while( n < m){
        if(m % n == 0){
            if( m % (n*3) == 0){
                n *= 3;
                count += 1;
            }
            else if( m % (n*2) == 0){
                n *= 2;
                count += 1;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
void printspace( ll a){
    for(int i = 0 ; i < a ; ++i){
        cout<<' ';
    }
    return;
}
void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll spaces = (n-1) * 2 , row = 1 , count = 0;
    ll i = 1;
    printspace(spaces);
    spaces -= 2;
    while( row <= n) {
        cout<<i;
        count += 1;
        if(count == row){
            cout<<endl;
            i -= ( row - 1 );
            row += 1;
            count = 0;
            printspace(spaces);
            spaces -= 2;
        }
        i+= 1;
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
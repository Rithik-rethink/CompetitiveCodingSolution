#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
void printspaces(ll spaces){
    for(int i = 0 ; i < spaces; ++i){
        cout<<' ';
    }
    return;
}
void solve() {
	//implementation goes here
    ll n ;
    cin>>n;
    ll row = 1 ,spaces = n-1 , count = 0 , k = 1;
    printspaces(spaces);
    spaces -= 1;
    while(row <= n){
        cout<<'*';
        count += 1;
        //cout<<"spaces = "<<spaces<<endl;
        if(count == k){
            k += 2;
            row += 1;
            count = 0;
            cout<<endl;
            printspaces(spaces);
            spaces -= 1;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
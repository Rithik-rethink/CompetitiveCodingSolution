#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll temp = n*n;
    temp += 1;
    ll j = n;
    for(int i = 1 ; i <= temp/2 ;++i){
        cout<<i<<" "<<temp - i;
        j -= 2;
        if( j > 0){
            cout<<" ";
        }
        else if(j == 0){
            cout<<endl;
            j = n;
        }
        
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
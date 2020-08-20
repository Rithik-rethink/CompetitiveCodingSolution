#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll a,b,c;
    cin>>a>>b>>c;
    ll i = a;
    while( i <= b){
        cout<<i<<" ";
        ll temp = ((i - 32) * 5) / 9 ;
        if(to_string(i).size() == 1){
            cout<<"  ";
        }
        else if(to_string(i).size() == 2){
            cout<<" ";
        }
        cout<<temp<<endl;
        i+= c;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    ll temp = ( n * m )/2; 
    //cout<<temp<<endl;
    ll b = (n * m ) - ( n - 1);
    //cout<<b<<' '<<w<<endl;
    string s ="";
    ll i = 1;
    ll g = 1;
    while( g < n){
        if(i==m){
            cout<<"W"<<endl;
            i= 1;
            g+=1;
            continue;
        }
        cout<<"B";
        i+=1;
        
    }
    for(int i = 1 ; i <= m ;++i){
        cout<<"B";
    }
    cout<<endl;  
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
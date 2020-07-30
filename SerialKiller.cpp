#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    string a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    ll n;
    cin>>n;
    
    while(n--){
        string c,d;
        cin>>c>>d;
        if(c==a){
            a = d;
        }
        else{
            b = d;
        }
        cout<<a<<" "<<b<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
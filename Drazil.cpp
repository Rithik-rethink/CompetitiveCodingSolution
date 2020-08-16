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
    a = abs(a);
    b = abs(b);
    
    if(c < (a + b)){
        cout<<"NO"<<endl;
        return;
    }
    ll temp = (a + b) ;
    if(temp % 2 == 0 && c % 2 == 0){
        cout<<"YES"<<endl;
        return;    
    }
    else if(temp % 2 != 0 && c % 2 != 0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
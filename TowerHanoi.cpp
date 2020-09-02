#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

ll calc( ll s , ll d , ll h , ll n , ll c){
    if(n == 1){
        cout<<"Moving disk from "<<s<<" to "<<d<<endl;
        c+=1;
        return c;
    }
    calc(s , h ,d , n-1 , c);
    cout<<"Moving disk from "<<s<<" to "<<d<<endl;
    calc(h , d , s , n-1 , c);
    c+= 2*(n-1) + 1;
    return c;
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll s = 1, h = 2 , d = 3;
    ll count = 0;
    count = calc(s , d , h , n , count);
    cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
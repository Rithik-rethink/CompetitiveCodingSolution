#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll a,b,c;
    cin>>a>>b>>c;
    ll res1 , res2;
    if(a >= c){
        res1 = -1;
    }
    else if(a < c){
        res1 = 1;
    }
    else{
        res1 = -1;
    }
    if(c >= a){
        if(b*a <= c){
            res2 = -1;
        }
        else{
            res2 = b;
        }
    }
    else if(b == 1 && a == c){
        res2= -1;
    }
    else{
        res2 = 1;
    }
    cout<<res1<<" "<<res2<<endl;

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
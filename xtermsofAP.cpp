#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    ll r = 5;
    cout<<r<<" ";
    ll count = 2 ;
    bool flag = true;
    ll g = n;
    g -= 1;
    while(g--){
        if(flag){
            r+=6;
            cout<<r;
            count=2;
            flag = false;
        }
        else{
            r+=3;
            cout<<r;
            count-=1;
            if(count == 0){
                flag = true;
            }
        }
        if(g > 0){
            cout<<" ";
        }
    }
    cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
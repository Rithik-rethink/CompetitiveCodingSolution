#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n , a, b, c, d;
    cin>>n>>a>>b>>c>>d;
    if(a == c){
        cout<<"YES"<<endl;
        return;
    }
    ll i = a , j = c;
    while(i != b && j != d){
        if(i == j){
            cout<<"YES"<<endl;
            return;
        }
        if(i == n){
            i = 1;
        }
        else if(i<n)
            i+=1;
        if(j == 1){
            j = n;
        }
        else if(j>1)
            j-=1;
    }
    if(i == j){
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
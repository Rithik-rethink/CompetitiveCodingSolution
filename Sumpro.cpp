#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll fact( ll n ){
    ll pro = 1;
    for(int i = n ; i > 0 ; --i){
        pro *= i;
    }
    return pro;
}
void solve() {
	//implentation goes here
    ll n,ch;
    cin>>n;
    cin>>ch;
    if(ch == 1) { 
        cout<< (n * (n + 1)) / 2<<endl;
        return; 
    }
    else if(ch == 2){
        cout<<fact(n)<<endl;
        return;
    }
    cout<<-1<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
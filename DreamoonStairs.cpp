#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n, m;
    cin>>n>>m;
    if( n < m){
        cout<<-1<<endl;
        return;
    }
    if(n == m){
        cout<<n<<endl;
        return;
    }
    ll a;
    if(n % 2 == 0){
        a = n / 2;
    }
    else{
        a = n / 2 + 1;
    }
    if( a % m == 0){
        cout<<a<<endl;
        return;
    }
    ll temp = n / 2 , res;
    res = temp;
    if( n % 2 != 0){
        res =temp + 1;
    }
    for(int i = 0 ; i <= temp ; ++i){
        res += 1;
        //cout<<res<<endl;
        if(res % m == 0){
            cout<<res<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	
    cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
int check(ll a,ll b, ll c){
    if(a + b >= c){
        if(b+c >= a){
            if(c+a >=b){
                return 1;
            }
        }
    }
    return 0;
}
int checks(ll a,ll b, ll c){
    if(a + b > c){
        if(b+c > a){
            if(c+a > b){
                return 1;
            }
        }
    }
    return 0;
}

void solve() {
	//implentation goes here
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll res = check(a,b,c) + check(b,c,d) + check(a,c,d) +check(a,b,d);
    if(res == 0){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    if(checks(a,b,c)){
        cout<<"TRIANGLE"<<endl;
        return;
    }
    else if(checks(b,c,d)){
        cout<<"TRIANGLE"<<endl;
        return;
    }
    else if(checks(a,c,d)){
        cout<<"TRIANGLE"<<endl;
        return;

    }
    else if(checks(a,b,d)){
        cout<<"TRIANGLE"<<endl;
        return;
    }
    
    cout<<"SEGMENT"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array
#define mod 1000000007

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll vc,vd,t,f,c;
    cin>>vc>>vd>>t>>f>>c;
    ll p = 0 , d = 0;
    ll res = 0 , time_spent = 0;
    p = vc * t;
    while(p < c){
        if(p >= c){
            cout<<res<<endl;
            return;
        }
        p+=vc;
        if(time_spent == 0){
            d += vd;
        }
        if(d >= p && p < c){
            res += 1;
            ll temp = d / vd;
            p += (vc*temp);
            d = 0;
            time_spent = f;
            continue;
        }
        if(time_spent!=0){
            time_spent-=1;
        }
    }
    cout<<res<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
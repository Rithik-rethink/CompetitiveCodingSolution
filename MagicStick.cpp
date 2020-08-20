#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;
ll willreturn(ll temp){
    ll d =temp;
    while(temp > 0 ){
        ll r = temp;
        temp = temp * 3 / 2;
        if(temp - int(temp) == 0){
            break;
        }
        temp = r;
        if(temp > 1)
            temp -= 1;
        if(temp == d){
            return temp;
        }
    }
    return temp;
}
void solve() {
	//implementation goes here
    double n , m;
    cin>>n>>m;
    if( n == m ){
        cout<<"YES"<<endl;
        return;
    }
    ll r = n;
    while( n < m ){
        if( int(n) % 2 != 0 && n > 1){
            n -= 1;
        }
        else{
            ll f = n;
            n = n*3 / 2;
            if(n - int(n) != 0){
                n = willreturn(n);
                if( n == f){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else
                n = f;
            
            n = n * 3 / 2; 

        }
        //cout<<n<<endl;
        if(n == r){
            cout<<"NO"<<endl;
            return;
        }
        if( n == m ){
            cout<<"YES"<<endl;
            return;
        }
        //cout<<n<<" "<<m<<endl;
    }
    double res = n - int(n);
    if(res == 0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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
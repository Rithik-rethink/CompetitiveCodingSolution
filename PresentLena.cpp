#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    ll maxi = n;
    string s;
    ll temp = 2*n + 1;
    ll i = 0;
    bool majorflag = true;
    while( i >= 0){
        if( abs(n - i) > 0){
            for(int j = 1 ; j <= 2 * abs(n - i) ; ++j){
                cout<<' ';
            }
        }
        ll k = 0;
        bool flag = true;
        ll r;
        r = i;
        while( k >= 0){
            cout<<k;
            
            if( k == r ){
                k -= 1;
                if(k >= 0){
                    cout<<' ';
                }
                flag = false;
            }
            else if(flag){
                k += 1;
                cout<<' ';
            }
            else{
                k -= 1;
                if(k >= 0){
                    cout<<' ';
                }
            }

        }
        cout<<endl;
        if( i == n ){
            i -= 1;
            majorflag = false;
        }
        else if(majorflag){
            i += 1;
        }
        else{
            i -= 1;
        }
        
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
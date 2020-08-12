#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum = a + b + c + d;
    //cout<<sum<<endl;
    if(sum % 2 == 0){
        ll i = 0;
        while( a > 0 && b > 0 && c > 0){
            if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0){
                cout<<"YES"<<endl;
                return;
            }
            d += 3*i;
            a -= i;
            b -= i;
            c -= i;
            i += 1;
        }
        if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
    else{
        ll i = 1;
        while( a > 0 && b > 0 && c > 0){
            if(a % 2 != 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0){
                cout<<"YES"<<endl;
                return;
            }
            else if(a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0){
                cout<<"YES"<<endl;
                return;
            }
            else if(a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0){
                cout<<"YES"<<endl;
                return;
            }
            else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0){
                cout<<"YES"<<endl;
                return;
            }
            d += 3*i;
            a -= 1;
            b -= 1;
            c -= 1;
            i += 1;
        }
        if(a % 2 != 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0){
            cout<<"YES"<<endl;
            return;
        }
        else if(a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0){
            cout<<"YES"<<endl;
            return;
        }
        else if(a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0){
            cout<<"YES"<<endl;
            return;
        }
        else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
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
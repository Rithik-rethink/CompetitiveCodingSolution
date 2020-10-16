#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    if(n < 3){
        cout<<-1<<endl;
        return;
    }
    else if( n == 11){
        cout<<2<<" "<<1<<" "<<0<<endl;
        return;
    }
    if(n % 3 == 0){
        cout<<n/3<<" "<<0<<" "<<0<<endl;
        return;
    }
    else if(n % 5 == 0){
        cout<<0<<" "<<n/5<<" "<<0<<endl;
        return;
    }
    else if(n % 7 == 0){
        cout<<0<<" "<<0<<" "<<n/7<<endl;
        return;
    }
    ll temp = n % 7 ;
    if(temp == 3 ){
        cout<<1<<" "<<0<<" "<<n/7<<endl;
        return;
    }
    else if(temp == 5){
        cout<<0<<" "<<1<<" "<<n/7<<endl;
        return;
    }
    temp += 7;
    if(temp == 11){
        n -= temp;
        while(n > 0){
            ll temp2 = temp % 5;
            if(temp2 % 3 == 0){
                cout<<temp2 / 3 <<" "<<temp / 5 <<" "<<n/7<<endl;
                return;
            }
            n -= 7;
            temp += 7;
        }
        cout<<-1<<endl;
        return;
    }
    else if(temp == 8){
        cout<<1<<" "<<1<<" "<<n/7 - 1<<endl;
    }
    else if(temp == 9){
        cout<<3<<" "<<0<<" "<<n/7 - 1<<endl;
    }
    else if(temp == 13){
        cout<<1<<" "<<2<<" "<<n/7 - 1<<endl;
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
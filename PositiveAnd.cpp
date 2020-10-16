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
    ll N= n;

    ll digits = (ll)log2(n) + 1;
    ll i = 0;
    if(n == 2 ){
        cout<<-1<<endl;
        return;
    }
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    string s = "2 3 1";
    n -= 3;
    i = 4;
    ll prev = 2;
    digits = (ll)log2(prev) + 1;
    ll last = prev + (pow(2 , digits - 1) );
    while(n > 0){
        s += " ";
        if(last == i && (i + 1) <= N){
            s += to_string(i + 1);
            s += " ";
            s += to_string(i);
            prev = i;
            digits = (ll)log2(prev) + 1;
            last = prev + (pow(2 , digits - 1) );
            i += 2;
            n -= 2;
        }
        else if( last == i && (i + 1) > N){
            cout<<-1<<endl;
            return;
        }
        else{
            s += to_string(i);
            i += 1;
            n -= 1;

        }
    }
    
    cout<<s<<endl;


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
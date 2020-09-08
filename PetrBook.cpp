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
    vector<ll> arr;
    for(int i = 0 ; i < 7 ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll day = 0 , i = 0;
    while(n > 0){
        //cout<<n<<endl;
        n -= arr[i];
        day += 1;
        i += 1;
        if(day > 7){
            day = 1;
        }
        if(i == 7){
            i = 0;
        }
    }
    cout<<day<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
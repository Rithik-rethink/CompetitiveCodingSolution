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
    ll sum1 = 0 , sum2 = 0;
    vector<ll> arr;
    for(int i = 0 ; i < n ;++i){
        ll a;
        cin>>a;
        arr.push_back(a);
        if(i % 2 == 0){
            sum1 += a;
        }
        else{
            sum2 += a;
        }
    }
    if(sum1 == sum2){
        cout<<n<<endl;
        for(int i = 0 ; i < n ;++i){
            cout<<arr[i];
            if(i < n-1){
                cout<<" ";
            }
        }
        cout<<endl;
        return;
    }
    ll zero = count(arr.begin() , arr.end() , 0);
    ll one = count(arr.begin() , arr.end() , 1);
    if(zero >= one){
        cout<<n/2<<endl;
        
        for(int i = 0 ; i< n/2 ; ++i){
            cout<<0;
            if(i < n/2 - 1){
                cout<<" ";
            }
        }
        cout<<endl;
        return;
    }
    else{
        
        ll temp = n/2 ;
        if( temp % 2 != 0){
            temp += 1;
        }
        cout<<temp<<endl;
        for(int i = 0 ; i < temp ; ++i ){
            cout<<1;
            if( i < temp - 1){
                cout<<" ";
            }
        }
        cout<<endl;
        return;
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
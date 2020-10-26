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
    ll n;
    cin>>n;
    vector<string> arr;
    for(int i = 0 ; i < n ; ++i ){
        string a ;
        cin>>a;
        arr.emplace_back(a);
    }
    ll one = arr[0][1] - '0';
    ll two = arr[1][0] - '0';
    ll three = arr[n-1][n-2] - '0';
    ll four = arr[n-2][n-1] - '0';
    if(one == two && three == four && one != three){
        cout<<0<<endl;
    }
    else if(one == two && three != four && one == three){
        cout<<1<<endl;
        cout<<n<<" "<<n-1<<endl;
    }
    else if(one == two && three != four && one == four){
        cout<<1<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    else if(three == four && one != two && three == one){
        cout<<1<<endl;
        cout<<1<<" "<<2<<endl;
    }
    else if(three == four && one != two && two == three){
        cout<<1<<endl;
        cout<<2<<" "<<1<<endl;
    }
    else if(one == two && three == four && one == three){
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<1<<endl;
    }
    else if(one != two && three != four && one == three){
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    else if(one != two && three != four && one == four){
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
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
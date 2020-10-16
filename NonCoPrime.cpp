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
    if(n == 1 || n==2){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    cout<<n-1<<" ";
    for(int i = 1 ; i < n ; ++i ){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<1<<" "<<n<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
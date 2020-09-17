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
    ll res= n;
    ll sum = n*(n + 1);
    sum /= 2;
    if(sum % 2 != 0){
        cout<<0<<endl;
        return;
    }
    if(n % 2 !=0 ){
        n += 1;
    }

    sum/=2;
    // cout<<"half sum "<<sum<<endl;
    ll temp = n/4 ;
    // cout<<"temp "<<temp<<endl;
    ll mid = res - temp;
    // cout<<"mid "<<mid<<endl;
    ll sum1 = temp*((2*(mid+1)) + (temp-1));
    sum1 /= 2;
    temp += 1;
    // cout<<sum1<<" sum1"<<endl;
    ll ex = sum - sum1;
    ll res1 = abs(ex - mid) ;
    // cout<<res1<<endl;
    cout<<min(res1,temp)<<endl;
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


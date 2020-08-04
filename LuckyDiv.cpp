#include <bits/stdc++.h>
using namespace std;

#define lll __int64
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implentation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    if(n % 4 == 0){
        cout<<"YES"<<endl;
        return;
    }
    else if(n% 7 == 0 ){
        cout<<"YES"<<endl;
        return;
    }
    arr.push_back(44);
    arr.push_back(47);
    arr.push_back(74);
    arr.push_back(77);
    arr.push_back(444);
    arr.push_back(447);
    arr.push_back(474);
    arr.push_back(477);
    arr.push_back(744);
    arr.push_back(747);
    arr.push_back(774);
    arr.push_back(777);
    for(int i = 0 ; i < arr.size() ; ++i){
        if( n % arr[i] == 0 && arr[i] <= n){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
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
    ll m = n * n;
    vector<ll> arr,res;
    ll count = 0;
    for(int i = 1 ; i <= m ; ++i){
        ll a;
        cin>>a;
        arr.push_back(a);
        if(i % n == 0){
            if(find(arr.begin(),arr.end(),1)==arr.end() && find(arr.begin(),arr.end(),3)==arr.end()){
                count+=1;
                res.push_back(i / n);
            }
            arr.clear();
        }
    }
    cout<<count<<endl;
    if(count == 0){
        return;
    }
    for(int i = 0 ; i < res.size() ; ++i){
        cout<<res[i];
        if(i < res.size()-1){
            cout<<" ";

        }
    }
    cout<<endl;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
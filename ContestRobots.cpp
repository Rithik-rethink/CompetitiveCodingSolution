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
    vector<ll> arr1,arr2;
    for(int i = 0 ; i < n ;++i){
        ll a;
        cin>>a;
        arr1.push_back(a);
    }
    for(int i = 0 ; i < n ;++i){
        ll a;
        cin>>a;
        arr2.push_back(a);
    }
    ll res = 0,a=0,b=0;
    for(int i = 0; i < n ;++i){
        if(arr1[i] == 0 && arr2[i] != 0){
            b+=1;
        }
        else if(arr1[i]!=0 && arr2[i] == 0){
            a+=1;
        }
        else if(arr1[i] == arr2[i] ){
            res+=1;
        }
    }
    //cout<<a<<" "<<b<<" "<<res<<endl;
    if(res == n || a == 0){
        cout<<-1<<endl;
        return;
    }
    else if(a <= b){
        
        cout<<b/a + 1<<endl;
        return;
    }
    else if(a > b){
        cout<<1<<endl;
        return;
    }
    

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

stack<ll> delmid(stack<ll> arr , ll val){
    if(arr.size() == 1 || arr.size() == val){
        arr.pop();
        return arr;
    }
    ll temp = arr.top();
    arr.pop();
    arr = delmid(arr , val);
    arr.push(temp);
    return arr;
}

void solve() {
	//implementation goes here
    stack<ll> arr;
    ll n ;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push(a);
    }
    ll b = arr.size() / 2 + 1;
    //cout<<b<<endl;
    arr = delmid(arr , b);
    for(int i = 0 ; i < n- 1; ++i){
        cout<<arr.top()<<endl;
        arr.pop();
    }
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
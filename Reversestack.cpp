#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

stack<ll> insert(stack<ll> arr , ll temp){
    if(arr.empty()){
        arr.push(temp);
        return arr;
    }
    ll val = arr.top();
    arr.pop();
    arr = insert(arr,temp);
    arr.push(val);
    return arr;
}


stack<ll> reversing(stack<ll> arr ){
    if(arr.size() == 1){
        return arr;
    }
    ll temp = arr.top();
    arr.pop();
    arr = reversing(arr);
    arr = insert(arr , temp);
    return arr;
}


void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    stack<ll> arr,arr1;
    for(int i = 0 ; i < n ; ++i){
        ll a;
        cin>>a;
        arr.push(a);
        arr1.push(a);
    }
    for(int i = 0 ; i < n ; ++i ){
        cout<<arr1.top()<<" ";
        arr1.pop();
    }
    cout<<endl;
    arr = reversing(arr);
    for(int i = 0 ; i < n ; ++i ){
        cout<<arr.top()<<" ";
        arr.pop();
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
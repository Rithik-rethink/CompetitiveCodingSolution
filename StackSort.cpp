#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

stack<ll> input(stack<ll> arr , ll n){
    ll a;
    if(n == 1){
        cin>>a;
        arr.push(a);
        return arr;
    }
    arr = input(arr,n-1);
    cin>>a;
    arr.push(a);
    return arr;
}
stack<ll> insert(stack<ll> arr , ll val){
    if(arr.size() == 0 || arr.top() <= val){
        arr.push(val);
        return arr;
    }
    ll t = arr.top();
    arr.pop();
    arr = insert(arr , val);
    arr.push(t);
    return arr;
}
stack<ll> sort(stack<ll> arr){
    if(arr.size() == 1){
        return arr;
    }
    ll temp = arr.top();
    arr.pop();
    arr = sort(arr);
    arr = insert(arr,temp);
    return arr;
}
void solve() {
	//implementation goes here
    stack<ll> arr;
    ll n ;
    cin>>n;
    arr = input(arr , n);
    arr = sort(arr);
    string s = "";
    for(int i = 0 ; i < n ; ++i){
        s += to_string(arr.top());
        arr.pop();
        s += " ";
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

bool isOdd(ll i){
    return i % 2!= 0;
}
bool isEven(ll i){
    return i%2 == 0;
}

void solve() {
	//implementation goes here
    ll n;
    cin>>n;
    vector<ll> arr;
    ll ind  = -1;
    ll counto = 0 , countf = 0 ;
    bool flag = true;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        if(a % 2 == 0 && flag){
            countf += 1;
        }
        else{
            flag = false;
        }
        arr.emplace_back(a);
        if(a & 1){
            ind = i;
        }
    }
    ll totalo = count_if(arr.begin() ,arr.end() , isOdd);
    if(totalo == 0 || ind == -1 ){
        cout<<"Second"<<endl;
        return;
    }
    cout<<"First"<<endl;
     
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
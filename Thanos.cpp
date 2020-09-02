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
    vector<ll> arr;
    set<ll> arr1;
    for(int i = 0 ; i < 2*n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        arr1.insert(a);
    }
    if(arr1.size() == 1){
        cout<<-1<<endl;
        return;
    }
    ll j = -1 , res1 = 0 ,res2 = 0;
    string s ="";
    for(int i = 0 ; i <= (2*n - n) ; ++i ){
        
        res1 = 0;
        res2 = 0;
        if(j != -1){
            res1 = accumulate(arr.begin() + j , arr.begin() + j + i , 0);
        }
        res2 = accumulate(arr.begin()+i , arr.begin()+ n ,0);
        res1 += accumulate(arr.begin() + n , arr.end() , 0);
        if(res1 != res2){
            s += to_string(arr.begin() + i , arr.begin() + n , 0);
        }
    }

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}
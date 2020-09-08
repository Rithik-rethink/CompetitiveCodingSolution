#include <bits/stdc++.h>
using namespace std;

#define lll int64_t
#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	//implementation goes here
    ll n , k ;
    cin>>n>>k;
    vector<ll> arr,arr2 , res;
    for(int i = 0 ; i < n ; ++i ){
        ll a;
        cin>>a;
        arr.push_back(a);
        arr2.push_back(a);
    }
    sort(arr.begin() , arr.end() );
    ll sum = 0;
    for(int i = 0 ; i < n ; ++i ){
        //cout<<sum<<" "<<k<<endl;
        if(sum + arr[i] <= k){
            sum += arr[i];
            for(int j = 0 ; j < n ;++j){
                if(arr2[j] == arr[i] && find(res.begin() , res.end() , j + 1) == res.end()){
                    res.push_back(j + 1);
                    break;
                }
            }
        }
        else if(sum + arr[i] > k){
            break;
        }
    }
    string s = "";
    if(res.size() == 0){
        cout<<0<<endl;
        return;
    }
    cout<<res.size()<<endl;
    for(int i = 0 ; i < res.size() ;++i ){
        s += to_string(res[i]);
        s += " ";
    }
    s.pop_back();
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
}